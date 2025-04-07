#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4390);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8630);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);

#define public_6ac43c1 _public_6ac43c1
#define public_6ac43e4 _public_6ac43e4
#define public_6ac43e9 _public_6ac43e9
#define public_6ac43f1 _public_6ac43f1
#define public_6ac43f4 _public_6ac43f4
#define public_6ac4403 _public_6ac4403
#define public_6ac4422 _public_6ac4422
#define public_6ac4424 _public_6ac4424
#define public_6ac4456 _public_6ac4456
#define public_6ac446c _public_6ac446c
#define public_6ac4476 _public_6ac4476
#define public_6ac4486 _public_6ac4486
#define public_6ac449c _public_6ac449c
#define public_6ac44a6 _public_6ac44a6
#define public_6ac44b9 _public_6ac44b9
#define public_6ac44bf _public_6ac44bf
#define public_6ac44d0 _public_6ac44d0
#define public_6ac4533 _public_6ac4533
#define public_6ac453d _public_6ac453d

PROC_DECLARE(0x6ac4390, internal_6ac4390, public_6ac4390);
extern "C" NAKED register_t __cdecl internal_6ac4390()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        mov ecx, dword ptr ds : [edx+0x100]
        push edi
        test ecx, ecx
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp-8], eax
        je public_6ac453d
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        je public_6ac43c1
        mov edi, ebx
        rep movsd
        public_6ac43c1 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        jge public_6ac43e9
        mov ecx, dword ptr ds : [edx]
        not ecx
        test cl, 1
        je public_6ac43e4
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0x1C
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6ac43e4 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        public_6ac43e9 : nop
        jle public_6ac449c
        jmp public_6ac43f4
        public_6ac43f1 : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6ac43f4 : nop
        cmp eax, 0x20
        mov dword ptr ss : [ebp+0xC], 0x20
        jg public_6ac4403
        mov dword ptr ss : [ebp+0xC], eax
        public_6ac4403 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0xC]
        push edx
        push ebx
        push eax
        push ebx
        call public_6ac8bd0
        mov esi, dword ptr ss : [ebp-4]
        mov edi, eax
        cmp esi, 2
        jb public_6ac4422
        mov ecx, dword ptr ds : [ebx+esi*4-8]
        jmp public_6ac4424
        public_6ac4422 : nop
        xor ecx, ecx
        public_6ac4424 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ds:[edx+0x114]
        push eax
        mov eax, dword ptr ds : [ebx+esi*4-4]
        push ecx
        push eax
        push edi
        call public_6ac4fd0
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        push ebx
        push eax
        push ecx
        call public_6ac8630
        sub edi, eax
        mov dword ptr ss : [ebp+8], edi
        jne public_6ac4476
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp+0x14]
        public_6ac4456 : nop
        test eax, eax
        je public_6ac446c
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac4456
        sbb eax, eax
        or eax, 1
        public_6ac446c : nop
        test eax, eax
        jl public_6ac4486
        mov esi, dword ptr ss : [ebp-4]
        mov edi, dword ptr ss : [ebp+8]
        public_6ac4476 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push esi
        push ebx
        push edx
        push ebx
        call public_6ac89d0
        sub edi, eax
        jne public_6ac44a6
        public_6ac4486 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+0xC]
        sub eax, edx
        test eax, eax
        mov dword ptr ss : [ebp-8], eax
        jg public_6ac43f1
        mov edx, dword ptr ss : [ebp+0x14]
        public_6ac449c : nop
        test eax, eax
        jge public_6ac453d
        jmp public_6ac44bf
        public_6ac44a6 : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0x1A
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6ac44b9 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-8]
        public_6ac44bf : nop
        neg eax
        mov esi, 0x20
        cmp eax, esi
        mov dword ptr ss : [ebp+0xC], esi
        jg public_6ac44d0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ac44d0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        or edi, 0xFFFFFFFF
        sub esi, eax
        mov eax, dword ptr ds : [edx+0x11C]
        imul eax, dword ptr ds : [ebx]
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        neg eax
        push ecx
        push ebx
        and eax, edi
        push eax
        push edx
        call public_6ac8490
        mov edx, dword ptr ss : [ebp-4]
        mov edi, eax
        mov eax, dword ptr ss : [ebp+0xC]
        push edx
        neg eax
        push ebx
        push eax
        push ebx
        call public_6ac8bd0
        mov ecx, esi
        shl edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ebx+ecx*4-4]
        or edx, edi
        test eax, eax
        mov dword ptr ds : [ebx+ecx*4-4], edx
        jne public_6ac4533
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-8]
        add eax, ecx
        mov dword ptr ss : [ebp-8], eax
        js public_6ac44b9
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6ac4533 : nop
        mov dword ptr ds : [public_6ae097c], 0x1B
        public_6ac453d : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6ac4390)
    }
}

#undef public_6ac43c1
#undef public_6ac43e4
#undef public_6ac43e9
#undef public_6ac43f1
#undef public_6ac43f4
#undef public_6ac4403
#undef public_6ac4422
#undef public_6ac4424
#undef public_6ac4456
#undef public_6ac446c
#undef public_6ac4476
#undef public_6ac4486
#undef public_6ac449c
#undef public_6ac44a6
#undef public_6ac44b9
#undef public_6ac44bf
#undef public_6ac44d0
#undef public_6ac4533
#undef public_6ac453d
