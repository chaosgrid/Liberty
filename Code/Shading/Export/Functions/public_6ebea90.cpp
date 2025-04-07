#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea90);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3c00);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5220);

#define public_6ebeae4 _public_6ebeae4
#define public_6ebeaf9 _public_6ebeaf9
#define public_6ebeb04 _public_6ebeb04
#define public_6ebeb19 _public_6ebeb19
#define public_6ebeb3c _public_6ebeb3c
#define public_6ebeb61 _public_6ebeb61
#define public_6ebeba4 _public_6ebeba4
#define public_6ebebb2 _public_6ebebb2
#define public_6ebebc0 _public_6ebebc0
#define public_6ebebce _public_6ebebce
#define public_6ebebdc _public_6ebebdc
#define public_6ebebfa _public_6ebebfa

PROC_DECLARE(0x6ebea90, internal_6ebea90, public_6ebea90);
extern "C" NAKED register_t __cdecl internal_6ebea90()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ds : [public_6ed57c4]
        push ebp
        mov ebp, dword ptr ds : [public_6ed57c8]
        or eax, 0xFFFFFFFF
        push esi
        push edi
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6ebeae4
        xor edx, edx
        jmp public_6ebeaf9
        public_6ebeae4 : nop
        mov ecx, ebp
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ebeaf9 : nop
        cmp ebx, edi
        lea esi, ds:[edx+1]
        jne public_6ebeb04
        xor edx, edx
        jmp public_6ebeb19
        public_6ebeb04 : nop
        mov ecx, ebp
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ebeb19 : nop
        cmp edx, esi
        mov ecx, offset public_6ed57c0
        jae public_6ebeb3c
        lea edx, ss:[esp+0x10]
        push edx
        call public_6ec3c00
        sub esi, eax
        push esi
        push ebp
        mov ecx, offset public_6ed57c0
        call public_6ec4f20
        jmp public_6ebeb61
        public_6ebeb3c : nop
        call public_6ec3c00
        cmp esi, eax
        jae public_6ebeb61
        mov ecx, dword ptr ds : [public_6ed57c4]
        imul esi, 0x34
        mov eax, dword ptr ds : [public_6ed57c8]
        add esi, ecx
        push eax
        push esi
        mov ecx, offset public_6ed57c0
        call public_6ec5220
        public_6ebeb61 : nop
        mov ecx, dword ptr ds : [public_6ed57c8]
        mov edx, dword ptr ss : [esp+0x60]
        lea eax, ds:[ecx-0x34]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+0x30], edx
        or edx, 0xFFFFFFFF
        cmp ecx, edi
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+0x10], edi
        mov dword ptr ds : [eax+0x14], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x1C], edi
        mov dword ptr ds : [eax+0x20], edi
        mov dword ptr ds : [eax+0x24], edi
        mov dword ptr ds : [eax+0x28], edi
        mov dword ptr ds : [eax+0x2C], edi
        jl public_6ebeba4
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6ebeba4 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, edi
        jl public_6ebebb2
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        public_6ebebb2 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        cmp ecx, edi
        jl public_6ebebc0
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        public_6ebebc0 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        cmp ecx, edi
        jl public_6ebebce
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], edx
        public_6ebebce : nop
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, edi
        jl public_6ebebdc
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], edx
        public_6ebebdc : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        cmp ecx, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        jl public_6ebebfa
        mov dword ptr ds : [eax+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        add esp, 0x34
        ret 
        public_6ebebfa : nop
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6ebea90)
    }
}

#undef public_6ebeae4
#undef public_6ebeaf9
#undef public_6ebeb04
#undef public_6ebeb19
#undef public_6ebeb3c
#undef public_6ebeb61
#undef public_6ebeba4
#undef public_6ebebb2
#undef public_6ebebc0
#undef public_6ebebce
#undef public_6ebebdc
#undef public_6ebebfa
