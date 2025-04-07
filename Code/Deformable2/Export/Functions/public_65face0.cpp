#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65face0);

#define public_65fad30 _public_65fad30
#define public_65fad40 _public_65fad40
#define public_65fad52 _public_65fad52
#define public_65fad71 _public_65fad71
#define public_65fad86 _public_65fad86
#define public_65fada3 _public_65fada3

PROC_DECLARE(0x65face0, internal_65face0, public_65face0);
extern "C" NAKED register_t __cdecl internal_65face0()
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
        mov ecx, dword ptr ds : [edx+0x240]
        mov dword ptr ds : [eax+0x244], ecx
        mov ecx, dword ptr ds : [edi+0x240]
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], 0
        jle public_65fada3
        push ebx
        push ebp
        mov ecx, edi
        sub eax, edi
        push esi
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x10], eax
        nop 
        lea esp, ss:[esp]
        public_65fad30 : nop
        mov esi, dword ptr ds : [edx+0x244]
        xor ebp, ebp
        test esi, esi
        jle public_65fad86
        mov ebx, edx
        add eax, ecx
        public_65fad40 : nop
        xor esi, esi
        mov dword ptr ds : [eax], 0
        cmp dword ptr ds : [edi+0x244], esi
        jle public_65fad71
        mov edx, ebx
        public_65fad52 : nop
        fld dword ptr ds : [edx]
        inc esi
        fmul dword ptr ds : [ecx]
        add ecx, 4
        add edx, 4
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+0x244]
        jl public_65fad52
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        public_65fad71 : nop
        mov esi, dword ptr ds : [edx+0x244]
        inc ebp
        add eax, 4
        add ebx, 0x30
        cmp ebp, esi
        jl public_65fad40
        mov eax, dword ptr ss : [esp+0x10]
        public_65fad86 : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+0x240]
        inc esi
        add ecx, 0x30
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x20], ecx
        jl public_65fad30
        pop esi
        pop ebp
        pop ebx
        public_65fada3 : nop
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65face0)
    }
}

#undef public_65fad30
#undef public_65fad40
#undef public_65fad52
#undef public_65fad71
#undef public_65fad86
#undef public_65fada3
