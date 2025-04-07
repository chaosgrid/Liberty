#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6271d00);
CLANG_FORWARD_PROC_SYMBOL(public_629b110);
CLANG_FORWARD_PROC_SYMBOL(public_629b860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63938f6);

#define public_629b147 _public_629b147
#define public_629b15b _public_629b15b
#define public_629b161 _public_629b161
#define public_629b190 _public_629b190
#define public_629b1a5 _public_629b1a5
#define public_629b1d0 _public_629b1d0
#define public_629b1e5 _public_629b1e5

PROC_DECLARE(0x629b110, internal_629b110, public_629b110);
extern "C" NAKED register_t __cdecl internal_629b110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63938f6 @0x629b112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63938f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x20], 1
        je public_629b161
        public_629b147 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], 0
        je public_629b15b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_629b15b : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_629b147
        public_629b161 : nop
        mov ecx, edi
        call public_6271d00
        lea ebp, ds:[ebx+4]
        push ebp
        call public_629b860
        mov dword ptr ds : [ebx+0x1C], 0
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x20], 0
        je public_629b1a5
        lea esp, ss:[esp]
        public_629b190 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_629b190
        public_629b1a5 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_629b1e5
        lea ebx, ds:[ebx]
        public_629b1d0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp esi, edi
        jne public_629b1d0
        public_629b1e5 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x629b110)
    }
}

#undef public_629b147
#undef public_629b15b
#undef public_629b161
#undef public_629b190
#undef public_629b1a5
#undef public_629b1d0
#undef public_629b1e5
