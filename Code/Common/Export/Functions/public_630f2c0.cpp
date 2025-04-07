#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f2c0);

#define public_630f2da _public_630f2da
#define public_630f2de _public_630f2de
#define public_630f308 _public_630f308
#define public_630f324 _public_630f324
#define public_630f33b _public_630f33b
#define public_630f34d _public_630f34d
#define public_630f351 _public_630f351
#define public_630f396 _public_630f396
#define public_630f399 _public_630f399
#define public_630f3a4 _public_630f3a4

PROC_DECLARE(0x630f2c0, internal_630f2c0, public_630f2c0);
extern "C" NAKED register_t __cdecl internal_630f2c0()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr ss : [ebp+0x18]
        xor edx, edx
        cmp esi, edx
        push edi
        je public_630f2da
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_630f2de
        public_630f2da : nop
        mov dword ptr ss : [esp+0xC], edx
        public_630f2de : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        inc ecx
        cmp esi, edx
        mov dword ptr ss : [ebp+0x24], ecx
        mov edi, 0x3FF
        je public_630f3a4
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x1C]
        cmp eax, ecx
        jae public_630f3a4
        sub ecx, eax
        cmp ecx, edi
        jae public_630f308
        mov edi, ecx
        public_630f308 : nop
        add esi, eax
        add eax, edi
        cmp esi, edx
        mov dword ptr ss : [ebp+0x20], eax
        je public_630f3a4
        xor eax, eax
        cmp edi, edx
        push ebx
        mov ebx, edi
        mov dword ptr ss : [esp+0x14], edi
        jbe public_630f351
        public_630f324 : nop
        mov cl, byte ptr ds : [esi+eax]
        movsx edx, cl
        cmp edx, 0xD
        je public_630f33b
        cmp edx, 0xA
        je public_630f33b
        inc eax
        cmp eax, edi
        jb public_630f324
        jmp public_630f351
        public_630f33b : nop
        mov ebx, eax
        inc eax
        cmp eax, edi
        jae public_630f34d
        mov dl, byte ptr ds : [esi+eax]
        xor cl, 7
        cmp dl, cl
        jne public_630f34d
        inc eax
        public_630f34d : nop
        mov dword ptr ss : [esp+0x14], eax
        public_630f351 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ebx+eax], 0
        mov dword ptr ds : [eax+0x400], ebx
        mov dword ptr ds : [eax+0x404], 0
        mov eax, dword ptr ss : [esp+0x10]
        add eax, ecx
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        pop ebx
        je public_630f399
        mov ecx, dword ptr ss : [ebp+0x1C]
        cmp eax, ecx
        jbe public_630f396
        mov eax, ecx
        public_630f396 : nop
        mov dword ptr ss : [ebp+0x20], eax
        public_630f399 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 8
        ret 4
        public_630f3a4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov byte ptr ds : [eax], 0
        mov dword ptr ds : [eax+0x404], edx
        mov dword ptr ds : [eax+0x400], edx
        xor al, al
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x630f2c0)
    }
}

#undef public_630f2da
#undef public_630f2de
#undef public_630f308
#undef public_630f324
#undef public_630f33b
#undef public_630f34d
#undef public_630f351
#undef public_630f396
#undef public_630f399
#undef public_630f3a4
