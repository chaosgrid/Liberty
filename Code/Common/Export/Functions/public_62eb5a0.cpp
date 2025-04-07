#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eb5a0);

#define public_62eb5d2 _public_62eb5d2
#define public_62eb5ea _public_62eb5ea
#define public_62eb5ec _public_62eb5ec
#define public_62eb626 _public_62eb626
#define public_62eb660 _public_62eb660

PROC_DECLARE(0x62eb5a0, internal_62eb5a0, public_62eb5a0);
extern "C" NAKED register_t __cdecl internal_62eb5a0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x830]
        xor ebp, ebp
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], ebp
        jbe public_62eb660
        push edi
        lea edi, ds:[esi+0x30]
        public_62eb5d2 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_62eb626
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb5ea
        lea ecx, ds:[eax-8]
        jmp public_62eb5ec
        public_62eb5ea : nop
        xor ecx, ecx
        public_62eb5ec : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 5
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x11C]
        test eax, eax
        jne public_62eb626
        fld dword ptr ss : [esp+0x10]
        inc ebp
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_62eb626
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        public_62eb626 : nop
        mov eax, dword ptr ds : [esi+0x830]
        inc ebx
        add edi, 0x20
        cmp ebx, eax
        jb public_62eb5d2
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        pop edi
        jle public_62eb660
        fild dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        pop esi
        fdivr dword ptr ss : [esp+0xC]
        pop ebp
        mov al, 1
        pop ebx
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [edx]
        add esp, 0xC
        ret 8
        public_62eb660 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62eb5a0)
    }
}

#undef public_62eb5d2
#undef public_62eb5ea
#undef public_62eb5ec
#undef public_62eb626
#undef public_62eb660
