#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d34f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d025);

#define public_6d34fa6 _public_6d34fa6
#define public_6d34fde _public_6d34fde
#define public_6d34fe2 _public_6d34fe2
#define public_6d34ff6 _public_6d34ff6
#define public_6d3502b _public_6d3502b
#define public_6d3502f _public_6d3502f
#define public_6d3504b _public_6d3504b
#define public_6d350a0 _public_6d350a0
#define public_6d350b4 _public_6d350b4
#define public_6d350e2 _public_6d350e2
#define public_6d350f1 _public_6d350f1
#define public_6d3511d _public_6d3511d
#define public_6d3514c _public_6d3514c
#define public_6d35167 _public_6d35167
#define public_6d3517a _public_6d3517a
#define public_6d3517b _public_6d3517b
#define public_6d3517d _public_6d3517d

PROC_DECLARE(0x6d34f86, internal_6d34f86, public_6d34f86);
extern "C" NAKED register_t __cdecl internal_6d34f86()
{
    __asm
    {
        mov eax, public_6d5d025
        call public_6d5cd8c
        sub esp, 0x30
        push ebx
        mov ebx, ecx
        cmp byte ptr ds : [ebx+8], 2
        je public_6d34fa6
        mov eax, 0x80004005
        jmp public_6d3517d
        public_6d34fa6 : nop
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x1058]
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x30], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        mov esi, offset _public_6d2f87d
        je public_6d34fde
        push esi
        push edi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_6d34fe2
        public_6d34fde : nop
        and dword ptr ss : [ebp-0x10], 0
        public_6d34fe2 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d34ff6
        mov eax, 0x8007000E
        jmp public_6d3517b
        public_6d34ff6 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax+0x1058]
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x30], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d3502b
        push esi
        push edi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6d3502f
        public_6d3502b : nop
        and dword ptr ss : [ebp-0x14], 0
        public_6d3502f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x14], 0
        jne public_6d3504b
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        mov eax, 0x8007000E
        jmp public_6d3517a
        public_6d3504b : nop
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 0x10
        xor edx, edx
        div dword ptr ds : [esi+0x1058]
        mov edi, dword ptr ds : [esi+0x105C]
        xor edx, edx
        mov esi, dword ptr ds : [esi+0x1060]
        and dword ptr ss : [ebp-0x28], 0
        and dword ptr ss : [ebp-0x1C], 0
        mov dword ptr ss : [ebp-0x34], eax
        mov eax, dword ptr ds : [ecx+0x105C]
        shl eax, 0x10
        div edi
        xor edx, edx
        mov dword ptr ss : [ebp-0x38], eax
        mov eax, dword ptr ds : [ecx+0x1060]
        shl eax, 0x10
        div esi
        test esi, esi
        mov dword ptr ss : [ebp-0x3C], eax
        jbe public_6d35167
        public_6d350a0 : nop
        or dword ptr ss : [ebp-0x2C], 0xFFFFFFFF
        xor esi, esi
        cmp edi, esi
        mov dword ptr ss : [ebp-0x30], esi
        mov dword ptr ss : [ebp-0x18], esi
        jbe public_6d3514c
        public_6d350b4 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        and dword ptr ss : [ebp-0x20], 0
        and dword ptr ss : [ebp-0x24], 0
        xor eax, esi
        test eax, 0xFFFF0000
        je public_6d350e2
        push dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        shr edx, 0x10
        push edx
        mov edx, esi
        shr edx, 0x10
        push edx
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x2C], esi
        public_6d350e2 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [eax+0x1058], 0
        jbe public_6d3511d
        mov eax, dword ptr ss : [ebp-0x14]
        public_6d350f1 : nop
        mov esi, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x34]
        add dword ptr ss : [ebp-0x20], ecx
        shr esi, 0x10
        shl esi, 4
        add esi, dword ptr ss : [ebp-0x10]
        inc dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x24]
        mov edi, eax
        movsd 
        movsd 
        movsd 
        movsd 
        mov ecx, dword ptr ds : [ebx+4]
        add eax, 0x10
        cmp edx, dword ptr ds : [ecx+0x1058]
        jb public_6d350f1
        public_6d3511d : nop
        push dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [ebx+4]
        push dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [ecx]
        push dword ptr ss : [ebp-0x18]
        call dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp-0x30]
        add esi, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [ebx+4]
        inc dword ptr ss : [ebp-0x18]
        mov edi, dword ptr ds : [eax+0x105C]
        cmp dword ptr ss : [ebp-0x18], edi
        mov dword ptr ss : [ebp-0x30], esi
        jb public_6d350b4
        public_6d3514c : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        add dword ptr ss : [ebp-0x28], eax
        inc dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ds : [eax+0x1060]
        jb public_6d350a0
        public_6d35167 : nop
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        xor eax, eax
        public_6d3517a : nop
        pop ecx
        public_6d3517b : nop
        pop edi
        pop esi
        public_6d3517d : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d34f86)
    }
}

#undef public_6d34fa6
#undef public_6d34fde
#undef public_6d34fe2
#undef public_6d34ff6
#undef public_6d3502b
#undef public_6d3502f
#undef public_6d3504b
#undef public_6d350a0
#undef public_6d350b4
#undef public_6d350e2
#undef public_6d350f1
#undef public_6d3511d
#undef public_6d3514c
#undef public_6d35167
#undef public_6d3517a
#undef public_6d3517b
#undef public_6d3517d
