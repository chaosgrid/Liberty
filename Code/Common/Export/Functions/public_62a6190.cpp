#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a6190);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393e8b);

#define public_62a61c0 _public_62a61c0
#define public_62a61ce _public_62a61ce
#define public_62a61e0 _public_62a61e0
#define public_62a6207 _public_62a6207
#define public_62a6218 _public_62a6218
#define public_62a622d _public_62a622d

PROC_DECLARE(0x62a6190, internal_62a6190, public_62a6190);
extern "C" NAKED register_t __cdecl internal_62a6190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393e8b @0x62a6192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393e8b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        mov edi, dword ptr ds : [ebx+0x48]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], 0
        je public_62a61ce
        public_62a61c0 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_62af640
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a61c0
        public_62a61ce : nop
        lea edi, ds:[ebx+0x44]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_62a6207
        lea ebx, ds:[ebx]
        public_62a61e0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_62a61e0
        public_62a6207 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_62a622d
        public_62a6218 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62a6218
        public_62a622d : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62a6190)
    }
}

#undef public_62a61c0
#undef public_62a61ce
#undef public_62a61e0
#undef public_62a6207
#undef public_62a6218
#undef public_62a622d
