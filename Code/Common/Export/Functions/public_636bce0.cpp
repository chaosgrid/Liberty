#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_636bce0);

#define public_636bd06 _public_636bd06
#define public_636bdb2 _public_636bdb2

PROC_DECLARE(0x636bce0, internal_636bce0, public_636bce0);
extern "C" NAKED register_t __cdecl internal_636bce0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [eax]
        xor edi, edi
        mov di, word ptr ds : [esi+0x12]
        xor eax, eax
        mov dword ptr ss : [esp+0xC], 0
        test edi, edi
        jle public_636bdb2
        push ebp
        public_636bd06 : nop
        mov ebp, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ss : [ebp+eax*4]
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        cdq 
        idiv edi
        mov edx, dword ptr ss : [ebp+edx*4]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x34], edx
        lea edx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        fstp dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        call public_628bed0
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x3C]
        xor edi, edi
        fmul dword ptr ds : [esi]
        mov di, word ptr ds : [esi+0x12]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi+4]
        cmp eax, edi
        faddp 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        jl public_636bd06
        fld dword ptr ss : [esp+0x10]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x3C
        ret 
        public_636bdb2 : nop
        fld dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x636bce0)
    }
}

#undef public_636bd06
#undef public_636bdb2
