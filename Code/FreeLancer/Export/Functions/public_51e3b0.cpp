#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51e3b0);

#define public_51e3e2 _public_51e3e2
#define public_51e3ff _public_51e3ff
#define public_51e430 _public_51e430
#define public_51e446 _public_51e446
#define public_51e448 _public_51e448
#define public_51e44f _public_51e44f
#define public_51e465 _public_51e465
#define public_51e485 _public_51e485
#define public_51e4a2 _public_51e4a2
#define public_51e4b7 _public_51e4b7

PROC_DECLARE(0x51e3b0, internal_51e3b0, public_51e3b0);
extern "C" NAKED register_t __cdecl internal_51e3b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xF8]
        push esi
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov edi, dword ptr ds : [public_5c62a8]
        je public_51e430
        mov ecx, dword ptr ss : [ebp+0x104]
        or esi, 0xFFFFFFFF
        cmp ecx, esi
        je public_51e3e2
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov dword ptr ss : [ebp+0x104], esi
        public_51e3e2 : nop
        mov ecx, dword ptr ss : [ebp+0x108]
        cmp ecx, esi
        je public_51e3ff
        mov eax, dword ptr ss : [ebp+0xF8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov dword ptr ss : [ebp+0x108], esi
        public_51e3ff : nop
        mov eax, dword ptr ss : [ebp+0xF8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0xF8], ebx
        mov dword ptr ss : [ebp+0x10C], ebx
        mov byte ptr ss : [ebp+0x110], bl
        mov ecx, dword ptr ss : [ebp+0x100]
        mov eax, dword ptr ds : [ecx+8]
        add ecx, 8
        cmp eax, ebx
        je public_51e430
        push ebx
        call edi
        public_51e430 : nop
        mov ecx, dword ptr ss : [ebp+0x100]
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, 8
        cmp eax, ebx
        je public_51e446
        add eax, 8
        jmp public_51e448
        public_51e446 : nop
        xor eax, eax
        public_51e448 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_51e44f
        push eax
        call edi
        public_51e44f : nop
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, ebx
        jne public_51e465
        mov dword ptr ss : [ebp+0x10C], ebx
        mov byte ptr ss : [ebp+0x110], bl
        jmp public_51e4a2
        public_51e465 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x104
        lea edx, ss:[ebp+0x110]
        jb public_51e485
        mov eax, 0x103
        public_51e485 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+edx], bl
        mov dword ptr ss : [ebp+0x10C], eax
        public_51e4a2 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        je public_51e4b7
        lea edi, ss:[ebp+0x214]
        mov ecx, 0xC
        rep movsd
        public_51e4b7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x51e3b0)
    }
}

#undef public_51e3e2
#undef public_51e3ff
#undef public_51e430
#undef public_51e446
#undef public_51e448
#undef public_51e44f
#undef public_51e465
#undef public_51e485
#undef public_51e4a2
#undef public_51e4b7
