#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1200);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2940);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2950);
CLANG_FORWARD_PROC_SYMBOL(public_6ef403c);

#define public_6ef1259 _public_6ef1259
#define public_6ef127f _public_6ef127f
#define public_6ef128e _public_6ef128e
#define public_6ef129a _public_6ef129a
#define public_6ef12a3 _public_6ef12a3
#define public_6ef12ab _public_6ef12ab
#define public_6ef12ca _public_6ef12ca
#define public_6ef12e2 _public_6ef12e2
#define public_6ef12ef _public_6ef12ef

PROC_DECLARE(0x6ef1200, internal_6ef1200, public_6ef1200);
extern "C" NAKED register_t __cdecl internal_6ef1200()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [ebp], al
        call public_6ef2800
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0x10], ebx
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x14], ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x20], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov dword ptr ss : [ebp+0xA8], ebx
        xor eax, eax
        mov dword ptr ss : [ebp+0xB8], ebx
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call public_6ef2940
        cmp eax, edi
        jae public_6ef1259
        call public_6ef403c
        public_6ef1259 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        je public_6ef127f
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6ef127f
        cmp cl, 0xFF
        je public_6ef127f
        cmp edi, ebx
        jne public_6ef12a3
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, ebp
        call public_6ef2800
        jmp public_6ef12ca
        public_6ef127f : nop
        cmp edi, ebx
        jne public_6ef128e
        push 1
        mov ecx, ebp
        call public_6ef2800
        jmp public_6ef12ca
        public_6ef128e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6ef129a
        cmp eax, edi
        jae public_6ef12ab
        public_6ef129a : nop
        push 1
        mov ecx, ebp
        call public_6ef2800
        public_6ef12a3 : nop
        mov ecx, ebp
        push edi
        call public_6ef2950
        public_6ef12ab : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push eax
        mov ecx, ebp
        call public_6ef28f0
        public_6ef12ca : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_6ef12ef
        cmp eax, ebx
        je public_6ef12e2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0x10], ebx
        public_6ef12e2 : nop
        cmp edi, ebx
        mov dword ptr ss : [ebp+0x10], edi
        je public_6ef12ef
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6ef12ef : nop
        xor eax, eax
        mov dword ptr ss : [ebp+0x28], ebx
        lea edi, ss:[ebp+0x2C]
        mov ecx, 0x15
        rep stosd
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x90], eax
        mov dword ptr ss : [ebp+0xD0], eax
        mov dword ptr ss : [ebp+0x80], ebx
        mov byte ptr ss : [ebp+0x84], bl
        mov byte ptr ss : [ebp+0x85], bl
        mov byte ptr ss : [ebp+0x86], bl
        mov dword ptr ss : [ebp+0x88], ebx
        mov dword ptr ss : [ebp+0x8C], ebx
        mov dword ptr ss : [ebp+0x94], ebx
        mov dword ptr ss : [ebp+0x98], ebx
        mov dword ptr ss : [ebp+0x9C], ebx
        mov dword ptr ss : [ebp+0xA0], ebx
        mov dword ptr ss : [ebp+0xA4], ebx
        mov dword ptr ss : [ebp+0xBC], ebx
        mov dword ptr ss : [ebp+0xC0], ebx
        mov dword ptr ss : [ebp+0xC4], ebx
        mov dword ptr ss : [ebp+0xC8], ebx
        mov dword ptr ss : [ebp+0xCC], ebx
        mov dword ptr ss : [ebp+0xD4], ebx
        xor eax, eax
        lea ecx, ss:[ebp+0xD8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov word ptr ds : [ecx+0x10], ax
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xEC], ebx
        mov dword ptr ss : [ebp+0xF0], ebx
        mov dword ptr ss : [ebp+0xF4], ebx
        mov dword ptr ss : [ebp+0xF8], ebx
        mov dword ptr ss : [ebp+0xFC], ebx
        mov dword ptr ss : [ebp+0x100], ebx
        mov dword ptr ss : [ebp+0x104], ebx
        mov dword ptr ss : [ebp+0x108], ebx
        mov dword ptr ss : [ebp+0x10C], ebx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ef1200)
    }
}

#undef public_6ef1259
#undef public_6ef127f
#undef public_6ef128e
#undef public_6ef129a
#undef public_6ef12a3
#undef public_6ef12ab
#undef public_6ef12ca
#undef public_6ef12e2
#undef public_6ef12ef
