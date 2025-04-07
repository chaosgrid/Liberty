#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50120);

#define public_6d50340 _public_6d50340
#define public_6d50354 _public_6d50354
#define public_6d50360 _public_6d50360
#define public_6d50374 _public_6d50374
#define public_6d5037a _public_6d5037a
#define public_6d50380 _public_6d50380
#define public_6d50382 _public_6d50382
#define public_6d50392 _public_6d50392
#define public_6d5039f _public_6d5039f
#define public_6d503a3 _public_6d503a3
#define public_6d503b3 _public_6d503b3
#define public_6d503c0 _public_6d503c0
#define public_6d503c4 _public_6d503c4
#define public_6d503d8 _public_6d503d8
#define public_6d503e5 _public_6d503e5
#define public_6d503f0 _public_6d503f0
#define public_6d50436 _public_6d50436
#define public_6d50443 _public_6d50443
#define public_6d5044b _public_6d5044b
#define public_6d50470 _public_6d50470
#define public_6d50488 _public_6d50488
#define public_6d5048d _public_6d5048d
#define public_6d504a0 _public_6d504a0
#define public_6d504ad _public_6d504ad
#define public_6d504bb _public_6d504bb
#define public_6d504de _public_6d504de

PROC_DECLARE(0x6d50120, internal_6d50120, public_6d50120);
extern "C" NAKED register_t __cdecl internal_6d50120()
{
    __asm
    {
        sub esp, 0xE0
        mov eax, dword ptr ds : [ecx+0x264]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_6d643c0]
        mov ebx, eax
        xor edi, edi
        add esp, 4
        cmp ebx, edi
        je public_6d503d8
        mov ebp, dword ptr ds : [public_6d64954]
        mov eax, 0x2E
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], 0x38
        mov dword ptr ss : [esp+0x7C], 0x42
        mov dword ptr ss : [esp+0x80], 0x2D
        mov dword ptr ss : [esp+0x84], 0x37
        mov dword ptr ss : [esp+0x88], 0x41
        mov dword ptr ss : [esp+0x8C], 0x2C
        mov dword ptr ss : [esp+0x90], 0x36
        mov dword ptr ss : [esp+0x94], 0x40
        mov dword ptr ss : [esp+0x98], 0x2B
        mov dword ptr ss : [esp+0x9C], 0x35
        mov dword ptr ss : [esp+0xA0], 0x3F
        mov dword ptr ss : [esp+0xA4], 0x2A
        mov dword ptr ss : [esp+0xA8], 0x34
        mov dword ptr ss : [esp+0xAC], 0x3E
        mov dword ptr ss : [esp+0xB0], 0x29
        mov dword ptr ss : [esp+0xB4], 0x33
        mov dword ptr ss : [esp+0xB8], 0x3D
        mov dword ptr ss : [esp+0xBC], 0x28
        mov dword ptr ss : [esp+0xC0], 0x32
        mov dword ptr ss : [esp+0xC4], 0x3C
        mov dword ptr ss : [esp+0xC8], 0x27
        mov dword ptr ss : [esp+0xCC], 0x31
        mov dword ptr ss : [esp+0xD0], 0x3B
        mov dword ptr ss : [esp+0xD4], 0x26
        mov dword ptr ss : [esp+0xD8], 0x30
        mov dword ptr ss : [esp+0xDC], 0x3A
        mov dword ptr ss : [esp+0xE0], 0x25
        mov dword ptr ss : [esp+0xE4], 0x2F
        mov dword ptr ss : [esp+0xE8], 0x39
        mov dword ptr ss : [esp+0xEC], edi
        mov dword ptr ss : [esp+0x20], 0x18
        mov dword ptr ss : [esp+0x24], 0x22
        mov dword ptr ss : [esp+0x28], 0x17
        mov dword ptr ss : [esp+0x2C], 0x21
        mov dword ptr ss : [esp+0x30], 0x16
        mov dword ptr ss : [esp+0x34], 0x20
        mov dword ptr ss : [esp+0x38], 0x15
        mov dword ptr ss : [esp+0x3C], 0x1F
        mov dword ptr ss : [esp+0x40], 0x14
        mov dword ptr ss : [esp+0x44], 0x1E
        mov dword ptr ss : [esp+0x48], 0x13
        mov dword ptr ss : [esp+0x4C], 0x1D
        mov dword ptr ss : [esp+0x50], 0x12
        mov dword ptr ss : [esp+0x54], 0x1C
        mov dword ptr ss : [esp+0x58], 0x11
        mov dword ptr ss : [esp+0x5C], 0x1B
        mov dword ptr ss : [esp+0x60], 0x10
        mov dword ptr ss : [esp+0x64], 0x1A
        mov dword ptr ss : [esp+0x68], 0xF
        mov dword ptr ss : [esp+0x6C], 0x19
        mov dword ptr ss : [esp+0x70], edi
        xor esi, esi
        nop 
        public_6d50340 : nop
        push eax
        mov ecx, ebx
        call ebp
        test eax, eax
        jne public_6d50374
        mov eax, dword ptr ss : [esp+esi*4+0x78]
        inc esi
        cmp eax, edi
        jne public_6d50340
        xor esi, esi
        public_6d50354 : nop
        mov eax, 0x18
        lea esp, ss:[esp]
        public_6d50360 : nop
        push eax
        mov ecx, ebx
        call ebp
        test eax, eax
        jne public_6d5037a
        mov eax, dword ptr ss : [esp+edi*4+0x24]
        inc edi
        test eax, eax
        jne public_6d50360
        jmp public_6d50380
        public_6d50374 : nop
        mov esi, dword ptr ss : [esp+esi*4+0x74]
        jmp public_6d50354
        public_6d5037a : nop
        mov edi, dword ptr ss : [esp+edi*4+0x20]
        jmp public_6d50382
        public_6d50380 : nop
        xor edi, edi
        public_6d50382 : nop
        xor ebx, ebx
        cmp esi, 0x2E
        mov dword ptr ss : [esp+0x14], ebx
        je public_6d503a3
        mov eax, 0x2E
        public_6d50392 : nop
        test eax, eax
        je public_6d5039f
        mov eax, dword ptr ss : [esp+ebx*4+0x78]
        inc ebx
        cmp eax, esi
        jne public_6d50392
        public_6d5039f : nop
        mov dword ptr ss : [esp+0x14], ebx
        public_6d503a3 : nop
        xor ecx, ecx
        cmp edi, 0x18
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d503c4
        mov eax, 0x18
        public_6d503b3 : nop
        test eax, eax
        je public_6d503c0
        mov eax, dword ptr ss : [esp+ecx*4+0x24]
        inc ecx
        cmp eax, edi
        jne public_6d503b3
        public_6d503c0 : nop
        mov dword ptr ss : [esp+0x18], ecx
        public_6d503c4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x27C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_6d503f0
        public_6d503d8 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xE0
        ret 
        public_6d503e5 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6d503f0 : nop
        mov eax, dword ptr ds : [public_6d64948]
        mov edx, dword ptr ds : [edi+0x10]
        cmp edx, dword ptr ds : [eax]
        je public_6d504bb
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call dword ptr ds : [public_6d642fc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6d504bb
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xE
        jne public_6d5044b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        xor edx, edx
        cmp eax, 0x2E
        je public_6d50443
        mov ecx, 0x2E
        public_6d50436 : nop
        test ecx, ecx
        je public_6d50443
        mov ecx, dword ptr ss : [esp+edx*4+0x78]
        inc edx
        cmp ecx, eax
        jne public_6d50436
        public_6d50443 : nop
        cmp edx, ebx
        jl public_6d504de
        public_6d5044b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x11
        jne public_6d504bb
        mov ecx, esi
        xor ebx, ebx
        call dword ptr ds : [public_6d6495c]
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle public_6d5048d
        lea esp, ss:[esp]
        public_6d50470 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64958]
        cmp eax, ebx
        jle public_6d50488
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64958]
        mov ebx, eax
        public_6d50488 : nop
        inc edi
        cmp edi, ebp
        jl public_6d50470
        public_6d5048d : nop
        xor ecx, ecx
        cmp ebx, 0x18
        je public_6d504ad
        mov eax, 0x18
        lea esp, ss:[esp]
        public_6d504a0 : nop
        test eax, eax
        je public_6d504ad
        mov eax, dword ptr ss : [esp+ecx*4+0x24]
        inc ecx
        cmp eax, ebx
        jne public_6d504a0
        public_6d504ad : nop
        cmp ecx, dword ptr ss : [esp+0x18]
        jl public_6d504de
        mov ebx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        public_6d504bb : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ds : [ecx+0x27C]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6d503e5
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xE0
        ret 
        public_6d504de : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xE0
        ret 
        UNREACHABLE_TRAP(0x6d50120)
    }
}

#undef public_6d50340
#undef public_6d50354
#undef public_6d50360
#undef public_6d50374
#undef public_6d5037a
#undef public_6d50380
#undef public_6d50382
#undef public_6d50392
#undef public_6d5039f
#undef public_6d503a3
#undef public_6d503b3
#undef public_6d503c0
#undef public_6d503c4
#undef public_6d503d8
#undef public_6d503e5
#undef public_6d503f0
#undef public_6d50436
#undef public_6d50443
#undef public_6d5044b
#undef public_6d50470
#undef public_6d50488
#undef public_6d5048d
#undef public_6d504a0
#undef public_6d504ad
#undef public_6d504bb
#undef public_6d504de
