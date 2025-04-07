#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f61350);

#define public_6f613a8 _public_6f613a8
#define public_6f61405 _public_6f61405
#define public_6f61411 _public_6f61411
#define public_6f6141e _public_6f6141e

PROC_DECLARE(0x6f61350, internal_6f61350, public_6f61350);
extern "C" NAKED register_t __cdecl internal_6f61350()
{
    __asm
    {
        sub esp, 0x114
        mov eax, dword ptr ss : [esp+0x11C]
        mov ecx, dword ptr ds : [eax+0x48]
        push ebx
        mov ebx, dword ptr ss : [esp+0x11C]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push 0x7F0000
        push 0x43960000
        push ebx
        push 0x40
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x1C
        xor esi, esi
        test eax, eax
        jbe public_6f61411
        mov ebp, dword ptr ds : [public_6fb3630]
        lea edi, ss:[esp+0x24]
        public_6f613a8 : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6f61405
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_6fbbc40]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_6f6141e
        public_6f61405 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        add edi, 4
        cmp esi, eax
        jb public_6f613a8
        public_6f61411 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x114
        ret 
        public_6f6141e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x6f61350)
    }
}

#undef public_6f613a8
#undef public_6f61405
#undef public_6f61411
#undef public_6f6141e
