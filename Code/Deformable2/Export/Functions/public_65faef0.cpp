#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65faef0);

#define public_65faf40 _public_65faf40
#define public_65faf50 _public_65faf50
#define public_65faf62 _public_65faf62
#define public_65faf81 _public_65faf81
#define public_65faf96 _public_65faf96
#define public_65fafb3 _public_65fafb3

PROC_DECLARE(0x65faef0, internal_65faef0, public_65faef0);
extern "C" NAKED register_t __cdecl internal_65faef0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+0x240]
        mov dword ptr ds : [eax+0x240], ecx
        mov ecx, dword ptr ds : [edx+0x244]
        mov dword ptr ds : [eax+0x244], ecx
        mov ecx, dword ptr ds : [edi+0x240]
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], 0
        jle public_65fafb3
        push ebx
        push ebp
        mov ecx, edi
        sub eax, edi
        push esi
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x10], eax
        nop 
        lea esp, ss:[esp]
        public_65faf40 : nop
        mov esi, dword ptr ds : [edx+0x244]
        xor ebp, ebp
        test esi, esi
        jle public_65faf96
        mov ebx, edx
        add eax, ecx
        public_65faf50 : nop
        xor esi, esi
        mov dword ptr ds : [eax], 0
        cmp dword ptr ds : [edi+0x244], esi
        jle public_65faf81
        mov edx, ebx
        public_65faf62 : nop
        fld dword ptr ds : [ecx]
        inc esi
        fmul dword ptr ds : [edx]
        add ecx, 4
        add edx, 0x30
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+0x244]
        jl public_65faf62
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        public_65faf81 : nop
        mov esi, dword ptr ds : [edx+0x244]
        inc ebp
        add eax, 4
        add ebx, 4
        cmp ebp, esi
        jl public_65faf50
        mov eax, dword ptr ss : [esp+0x10]
        public_65faf96 : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+0x240]
        inc esi
        add ecx, 0x30
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x20], ecx
        jl public_65faf40
        pop esi
        pop ebp
        pop ebx
        public_65fafb3 : nop
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65faef0)
    }
}

#undef public_65faf40
#undef public_65faf50
#undef public_65faf62
#undef public_65faf81
#undef public_65faf96
#undef public_65fafb3
