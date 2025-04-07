#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435960);
CLANG_FORWARD_PROC_SYMBOL(public_435b40);
CLANG_FORWARD_PROC_SYMBOL(public_445580);
CLANG_FORWARD_PROC_SYMBOL(public_445a60);
CLANG_FORWARD_PROC_SYMBOL(public_449e60);

#define public_449e94 _public_449e94
#define public_449ea4 _public_449ea4
#define public_449eaf _public_449eaf
#define public_449eb4 _public_449eb4
#define public_449ec0 _public_449ec0
#define public_449ed0 _public_449ed0
#define public_449ed2 _public_449ed2
#define public_449eed _public_449eed
#define public_449f2c _public_449f2c

PROC_DECLARE(0x449e60, internal_449e60, public_449e60);
extern "C" NAKED register_t __cdecl internal_449e60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        mov ebp, ecx
        cmp eax, dword ptr ss : [ebp+0x38]
        jne public_449f2c
        lea ecx, ds:[edi+0x24]
        push ecx
        call public_435b40
        add esp, 4
        test al, al
        je public_449f2c
        lea ecx, ss:[ebp+0x518]
        xor esi, esi
        mov edx, ecx
        public_449e94 : nop
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_449ea4
        mov eax, dword ptr ds : [eax+0x154]
        cmp eax, dword ptr ds : [edi]
        je public_449eaf
        public_449ea4 : nop
        inc esi
        add edx, 4
        cmp esi, 0x40
        jl public_449e94
        jmp public_449eb4
        public_449eaf : nop
        cmp esi, 0xFFFFFFFF
        jne public_449eed
        public_449eb4 : nop
        or esi, 0xFFFFFFFF
        xor eax, eax
        lea esp, ss:[esp]
        public_449ec0 : nop
        cmp dword ptr ds : [ecx], 0
        je public_449ed0
        inc eax
        add ecx, 4
        cmp eax, 0x40
        jl public_449ec0
        jmp public_449ed2
        public_449ed0 : nop
        mov esi, eax
        public_449ed2 : nop
        push ebp
        push edi
        lea ecx, ss:[ebp+0x504]
        call public_435960
        pop edi
        mov dword ptr ss : [ebp+esi*4+0x518], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_449eed : nop
        mov edi, dword ptr ss : [ebp+esi*4+0x518]
        lea ebx, ds:[edi+0x154]
        mov ecx, ebx
        call dword ptr ds : [public_5c6194]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c60ec]
        mov ecx, edi
        call public_445a60
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x58]
        mov ecx, dword ptr ss : [ebp+esi*4+0x518]
        push 0
        push eax
        call public_445580
        public_449f2c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x449e60)
    }
}

#undef public_449e94
#undef public_449ea4
#undef public_449eaf
#undef public_449eb4
#undef public_449ec0
#undef public_449ed0
#undef public_449ed2
#undef public_449eed
#undef public_449f2c
