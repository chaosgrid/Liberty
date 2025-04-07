#include "Content-PCH.h"


#define public_6ec11e3 _public_6ec11e3
#define public_6ec11fe _public_6ec11fe
#define public_6ec121c _public_6ec121c
#define public_6ec1234 _public_6ec1234
#define public_6ec124f _public_6ec124f
#define public_6ec126c _public_6ec126c
#define public_6ec1293 _public_6ec1293
#define public_6ec12da _public_6ec12da
#define public_6ec12dc _public_6ec12dc

PROC_DECLARE(0x6ec11c0, internal_6ec11c0, public_6ec11c0);
extern "C" NAKED register_t __cdecl internal_6ec11c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec11e3
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec121c
        public_6ec11e3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec11fe
        mov eax, 0x2F
        public_6ec11fe : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov byte ptr ds : [eax+edx], bl
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec121c : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec1234
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        jmp public_6ec126c
        public_6ec1234 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec124f
        mov eax, 0x2F
        public_6ec124f : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec126c : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fcom dword ptr ds : [public_6fb444c]
        fst dword ptr ss : [ebp+0x80]
        fnstsw ax
        test ah, 0x41
        jne public_6ec1293
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x80]
        public_6ec1293 : nop
        push 3
        fstp st(0)
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x8C]
        push 4
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec12dc
        push 4
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fcom dword ptr ds : [public_6fb444c]
        fst dword ptr ss : [ebp+0x84]
        fnstsw ax
        test ah, 5
        jnp public_6ec12da
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x84]
        public_6ec12da : nop
        fstp st(0)
        public_6ec12dc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec11c0)
    }
}

#undef public_6ec11e3
#undef public_6ec11fe
#undef public_6ec121c
#undef public_6ec1234
#undef public_6ec124f
#undef public_6ec126c
#undef public_6ec1293
#undef public_6ec12da
#undef public_6ec12dc
