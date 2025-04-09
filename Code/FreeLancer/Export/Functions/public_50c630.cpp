#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c630);
CLANG_FORWARD_PROC_SYMBOL(public_510d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfc2b);

#define public_50c674 _public_50c674
#define public_50c676 _public_50c676
#define public_50c69b _public_50c69b
#define public_50c6b1 _public_50c6b1

PROC_DECLARE(0x50c630, internal_50c630, public_50c630);
extern "C" NAKED register_t __cdecl internal_50c630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfc2b @0x50c632*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfc2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push 0x8C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_50c674
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, eax
        call public_510d10
        mov ebx, eax
        jmp public_50c676
        public_50c674 : nop
        xor ebx, ebx
        public_50c676 : nop
        push esi
        mov esi, dword ptr ds : [public_675180]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_50c69b
        mov edi, eax
        public_50c69b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_50c6b1
        mov dword ptr ds : [eax], ebx
        public_50c6b1 : nop
        inc dword ptr ds : [public_675184]
        mov eax, dword ptr ds : [public_675180]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x50c630)
    }
}

#undef public_50c674
#undef public_50c676
#undef public_50c69b
#undef public_50c6b1
