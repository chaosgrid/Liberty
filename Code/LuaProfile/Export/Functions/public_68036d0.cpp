#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6803660);
CLANG_FORWARD_PROC_SYMBOL(public_6803690);
CLANG_FORWARD_PROC_SYMBOL(public_68036d0);
CLANG_FORWARD_PROC_SYMBOL(public_68037a0);
CLANG_FORWARD_PROC_SYMBOL(public_6803850);
CLANG_FORWARD_PROC_SYMBOL(public_6803890);
CLANG_FORWARD_PROC_SYMBOL(public_68052b0);
CLANG_FORWARD_PROC_SYMBOL(public_6805ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6805b10);
CLANG_FORWARD_PROC_SYMBOL(public_68064b0);
CLANG_FORWARD_PROC_SYMBOL(public_6806520);

#define public_6803785 _public_6803785

PROC_DECLARE(0x68036d0, internal_68036d0, public_68036d0);
extern "C" NAKED register_t __cdecl internal_68036d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_680e604]
        push ebx
        mov ebx, dword ptr ds : [eax+0x78]
        push ebp
        push esi
        push edi
        call public_6803890
        call public_68037a0
        call public_6805b10
        mov ecx, dword ptr ds : [public_680e604]
        add ecx, 0x50
        push ecx
        mov esi, eax
        call public_6803850
        mov edx, dword ptr ds : [public_680e604]
        add edx, 0x40
        push edx
        mov edi, eax
        call public_6803850
        mov ebp, eax
        mov eax, dword ptr ds : [public_680e604]
        add eax, 0x48
        push eax
        call public_6803850
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x74]
        shl ecx, 2
        push edi
        mov dword ptr ds : [eax+0x74], ecx
        call public_6803660
        push esi
        call public_6803690
/*FIXUP push offset public_680d968 @0x680373c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d968
        call public_6802fa0
        push edi
        call public_68052b0
        push esi
        call public_6805ac0
        push ebp
        call public_68064b0
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_6806520
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx+0x78]
        mov edx, dword ptr ss : [esp+0x40]
        add esp, 0x28
        sub ebx, eax
        test edx, edx
        jne public_6803785
        pop edi
        add eax, eax
        pop esi
        mov dword ptr ds : [ecx+0x74], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        public_6803785 : nop
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ds : [ecx+0x74], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x68036d0)
    }
}

#undef public_6803785
