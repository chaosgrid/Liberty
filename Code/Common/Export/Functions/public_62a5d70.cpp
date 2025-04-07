#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393e8b);

#define public_62a5da1 _public_62a5da1
#define public_62a5daf _public_62a5daf
#define public_62a5dc0 _public_62a5dc0
#define public_62a5de7 _public_62a5de7
#define public_62a5df8 _public_62a5df8
#define public_62a5e0d _public_62a5e0d

PROC_DECLARE(0x62a5d70, internal_62a5d70, public_62a5d70);
extern "C" NAKED register_t __cdecl internal_62a5d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393e8b @0x62a5d72*/
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
        lea ebx, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        mov edi, dword ptr ds : [ebx+0x48]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], 0
        je public_62a5daf
        public_62a5da1 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_62af640
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a5da1
        public_62a5daf : nop
        lea edi, ds:[ebx+0x44]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_62a5de7
        nop 
        lea esp, ss:[esp]
        public_62a5dc0 : nop
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
        jne public_62a5dc0
        public_62a5de7 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_62a5e0d
        public_62a5df8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62a5df8
        public_62a5e0d : nop
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
        UNREACHABLE_TRAP(0x62a5d70)
    }
}

#undef public_62a5da1
#undef public_62a5daf
#undef public_62a5dc0
#undef public_62a5de7
#undef public_62a5df8
#undef public_62a5e0d
