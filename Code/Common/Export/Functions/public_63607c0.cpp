#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634c6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6360ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_63607db _public_63607db
#define public_6360814 _public_6360814
#define public_6360839 _public_6360839
#define public_6360869 _public_6360869
#define public_636088f _public_636088f
#define public_6360895 _public_6360895

PROC_DECLARE(0x63607c0, internal_63607c0, public_63607c0);
extern "C" NAKED register_t __cdecl internal_63607c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], 0
        public_63607db : nop
        mov eax, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x14]
        xor edx, edx
        mov dx, word ptr ds : [eax+0xE]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], ecx
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [edi+0x18]
        fcom dword ptr ds : [public_63a53d0]
        shl edx, 4
        mov esi, dword ptr ds : [edx+eax+0xC]
        fst dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_636088f
        public_6360814 : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_6360814
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x14]
        public_6360839 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push ebx
        mov ecx, edi
        call public_6360ab0
        cmp esi, ebp
        jne public_6360869
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6360895
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov ecx, ebx
        call public_634c6d0
        public_6360869 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+8]
        push edx
        call public_6363280
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+4], 0xFFFF
        call dword ptr ds : [eax]
        jmp public_63607db
        public_636088f : nop
        fstp st(0)
        fstp st(0)
        jmp public_6360839
        public_6360895 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x63607c0)
    }
}

#undef public_63607db
#undef public_6360814
#undef public_6360839
#undef public_6360869
#undef public_636088f
#undef public_6360895
