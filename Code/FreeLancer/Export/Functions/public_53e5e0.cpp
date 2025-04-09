#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_PROC_SYMBOL(public_539740);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);

#define public_53e602 _public_53e602
#define public_53e604 _public_53e604
#define public_53e640 _public_53e640
#define public_53e677 _public_53e677

PROC_DECLARE(0x53e5e0, internal_53e5e0, public_53e5e0);
extern "C" NAKED register_t __cdecl internal_53e5e0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, ecx
        call public_539740
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_53e602
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_53e604
        public_53e602 : nop
        xor eax, eax
        public_53e604 : nop
        mov ebp, dword ptr ds : [public_5c6590]
        mov ecx, eax
        call ebp
        mov esi, eax
        add esi, 0x68
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_53e677
        push esi
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xAC], eax
        je public_53e640
        push eax
        call public_536100
        add esp, 4
        jmp public_53e677
        mov edi, edi
        public_53e640 : nop
        mov ecx, esi
        mov esi, dword ptr ds : [public_5c6044]
        push ebx
        mov ebx, 0x100002
        call esi
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        call ebp
        mov ecx, eax
        add ecx, 8
        call esi
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x47
/*FIXUP push offset public_5df7e0 @0x53e666*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df7e0
/*FIXUP push offset public_5df798 @0x53e66b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df798
        push ebx
        call dword ptr ds : [edx]
        add esp, 0x18
        pop ebx
        public_53e677 : nop
        mov edx, dword ptr ds : [edi]
        push 0
        lea eax, ds:[edi+0x3C]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        push eax
        call public_5553b0
        add esp, 0xC
        mov dword ptr ds : [edi+0x38], eax
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x53e5e0)
    }
}

#undef public_53e602
#undef public_53e604
#undef public_53e640
#undef public_53e677
