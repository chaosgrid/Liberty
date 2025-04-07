#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340e70);

#define public_6340e93 _public_6340e93
#define public_6340ea1 _public_6340ea1
#define public_6340eb9 _public_6340eb9
#define public_6340ee0 _public_6340ee0
#define public_6340f17 _public_6340f17
#define public_6340f2f _public_6340f2f
#define public_6340f4b _public_6340f4b
#define public_6340f74 _public_6340f74
#define public_6340f8c _public_6340f8c
#define public_6340fa6 _public_6340fa6
#define public_6340fb8 _public_6340fb8
#define public_6340fd0 _public_6340fd0
#define public_6340fec _public_6340fec
#define public_634102e _public_634102e

PROC_DECLARE(0x6340e70, internal_6340e70, public_6340e70);
extern "C" NAKED register_t __cdecl internal_6340e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        cmp ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        je public_634102e
        push ebx
        push esi
        add ebp, 4
        push edi
        lea edx, ds:[eax+0x90]
        xor ecx, ecx
        public_6340e93 : nop
        cmp ebp, ecx
        jne public_6340ea1
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [edx-0x8C], cl
        jmp public_6340ee0
        public_6340ea1 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6340eb9
        mov eax, 0x3F
        public_6340eb9 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x8C]
        mov esi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov byte ptr ds : [edx+eax-0x8C], cl
        mov dword ptr ds : [esi], eax
        public_6340ee0 : nop
        lea eax, ss:[ebp+0x40]
        mov edi, dword ptr ds : [eax]
        lea esi, ds:[edx-0x4C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [edx-0x40], eax
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [edx-0x3C], eax
        mov eax, dword ptr ss : [ebp+0x54]
        lea esi, ss:[ebp+0x5C]
        cmp esi, ecx
        mov dword ptr ds : [edx-0x38], eax
        jne public_6340f17
        mov dword ptr ds : [edx-0x34], ecx
        mov byte ptr ds : [edx-0x30], cl
        jmp public_6340f4b
        public_6340f17 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6340f2f
        mov eax, 0x1F
        public_6340f2f : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x30]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax-0x30], cl
        mov dword ptr ds : [edx-0x34], eax
        public_6340f4b : nop
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [edx-0x10], eax
        mov eax, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [edx-0xC], eax
        mov eax, dword ptr ss : [ebp+0x84]
        lea esi, ss:[ebp+0x8C]
        cmp esi, ecx
        mov dword ptr ds : [edx-8], eax
        jne public_6340f74
        mov dword ptr ds : [edx-4], ecx
        mov byte ptr ds : [edx], cl
        jmp public_6340fa6
        public_6340f74 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6340f8c
        mov eax, 0x3F
        public_6340f8c : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax], cl
        mov dword ptr ds : [edx-4], eax
        public_6340fa6 : nop
        lea esi, ss:[ebp+0xD0]
        cmp esi, ecx
        jne public_6340fb8
        mov dword ptr ds : [edx+0x40], ecx
        mov byte ptr ds : [edx+0x44], cl
        jmp public_6340fec
        public_6340fb8 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6340fd0
        mov eax, 0x3F
        public_6340fd0 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx+0x44]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax+0x44], cl
        mov dword ptr ds : [edx+0x40], eax
        public_6340fec : nop
        mov al, byte ptr ss : [ebp+0x110]
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [edx+0x84], al
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 0x118
        add eax, 0x118
        add edx, 0x118
        add ebp, 0x118
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], esi
        jne public_6340e93
        pop edi
        pop esi
        pop ebx
        public_634102e : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6340e70)
    }
}

#undef public_6340e93
#undef public_6340ea1
#undef public_6340eb9
#undef public_6340ee0
#undef public_6340f17
#undef public_6340f2f
#undef public_6340f4b
#undef public_6340f74
#undef public_6340f8c
#undef public_6340fa6
#undef public_6340fb8
#undef public_6340fd0
#undef public_6340fec
#undef public_634102e
