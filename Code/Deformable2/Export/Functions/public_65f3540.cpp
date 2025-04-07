#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3540);
CLANG_FORWARD_PROC_SYMBOL(public_65f5cb0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6330);
CLANG_FORWARD_PROC_SYMBOL(public_6600c00);

#define public_65f35c1 _public_65f35c1
#define public_65f3631 _public_65f3631

PROC_DECLARE(0x65f3540, internal_65f3540, public_65f3540);
extern "C" NAKED register_t __cdecl internal_65f3540()
{
    __asm
    {
        mov eax, 0x202C
        call public_6600c00
        push ebx
        mov ebx, dword ptr ds : [public_660100c]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2040]
        push edi
        push esi
        or edi, 0xFFFFFFFF
        or ebp, 0xFFFFFFFF
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x30], ebp
        mov ebp, dword ptr ss : [esp+0x2048]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], edi
        call public_65f5cb0
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_65f6330
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, 0xFFFFFFFF
        lea edi, ds:[ecx+0x10]
        jne public_65f35c1
        mov edx, dword ptr ss : [esp+0x2040]
        mov dword ptr ds : [edi], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x202C
        ret 
        public_65f35c1 : nop
        mov eax, dword ptr ss : [esp+0x2040]
        push esi
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ss : [esp+0x24], esi
        call ebx
        push esi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x18], esi
        call ebx
        add esp, 8
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [edi+4]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_65f3631
        push esi
        push esi
        lea eax, ss:[esp+0x44]
/*FIXUP push offset public_66025c0 @0x65f3608*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66025c0
        push eax
        call public_65f28b0
        push eax
        push 0x53
/*FIXUP push offset public_6602570 @0x65f3616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov ecx, 0x100001
/*FIXUP push offset public_6602054 @0x65f3620*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602054
        push ecx
        mov ecx, dword ptr ds : [public_6601008]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_65f3631 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x202C
        ret 
        UNREACHABLE_TRAP(0x65f3540)
    }
}

#undef public_65f35c1
#undef public_65f3631
