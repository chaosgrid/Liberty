#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_580290);

#define public_5803b3 _public_5803b3
#define public_5803ba _public_5803ba

PROC_DECLARE(0x580290, internal_580290, public_580290);
extern "C" NAKED register_t __cdecl internal_580290()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x65C]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x658]
        cmp ebp, edx
        push esi
        jge public_5803b3
        mov eax, dword ptr ds : [ebx+0x664]
        cmp ebp, eax
        jg public_5803b3
        cmp edx, eax
        jl public_5803b3
        sub eax, ebp
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        mov byte ptr ds : [ebx+0x66D], 1
        sub edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], edx
        fidiv dword ptr ss : [esp+0x10]
        lea edi, ds:[ebx+0x5B8]
        lea esi, ds:[ebx+0x540]
        mov ecx, 0xC
        rep movsd
        lea eax, ds:[ebx+0x5DC]
        pop edi
        fld dword ptr ds : [ebx+0x594]
        fsub dword ptr ds : [ebx+0x564]
        fld dword ptr ds : [ebx+0x598]
        fsub dword ptr ds : [ebx+0x568]
        fld dword ptr ds : [ebx+0x59C]
        fsub dword ptr ds : [ebx+0x56C]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ebx+0x564]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+0x568]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+0x56C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [ebx+0x51C]
        cmp ecx, 0xFFFFFFFF
        je public_5803ba
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x5B8]
        push edx
        push ecx
        push eax
        call dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x51C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_5803b3 : nop
        mov byte ptr ds : [ebx+0x66D], 0
        public_5803ba : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x580290)
    }
}

#undef public_5803b3
#undef public_5803ba
