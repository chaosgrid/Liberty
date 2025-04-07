#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5ac10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5aee0);

#define public_6f5af30 _public_6f5af30
#define public_6f5af44 _public_6f5af44

PROC_DECLARE(0x6f5aee0, internal_6f5aee0, public_6f5aee0);
extern "C" NAKED register_t __cdecl internal_6f5aee0()
{
    __asm
    {
        sub esp, 0x7C
        push ebx
        mov ebx, dword ptr ds : [public_6fb3664]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x90]
        push edi
        mov edi, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ds : [edi]
        imul edx, 0x44
        mov ebp, ecx
        lea eax, ss:[esp+0x68]
        push eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [edx+eax]
        push ecx
        call ebx
        mov eax, dword ptr ds : [edi]
        add esp, 0xC
        test eax, eax
        jne public_6f5af30
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x44]
        push edx
        mov edx, dword ptr ds : [ecx+0x44]
        lea eax, ss:[esp+0x30]
        push eax
        jmp public_6f5af44
        public_6f5af30 : nop
        imul eax, 0x44
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ds : [eax+ecx-0x44]
        public_6f5af44 : nop
        push edx
        call ebx
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0xA8]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x9C]
        fsub dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x38]
        fsub dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        fst dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        mov ecx, ebp
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_6fbbb58]
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ds : [public_6fbbb58]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_6fbbb58]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x4C]
        call public_6f5ac10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7C
        ret 0x10
        UNREACHABLE_TRAP(0x6f5aee0)
    }
}

#undef public_6f5af30
#undef public_6f5af44
