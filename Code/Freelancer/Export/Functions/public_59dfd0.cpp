#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dfd0);

#define public_59e04c _public_59e04c
#define public_59e056 _public_59e056
#define public_59e06c _public_59e06c
#define public_59e073 _public_59e073

PROC_DECLARE(0x59dfd0, internal_59dfd0, public_59dfd0);
extern "C" NAKED register_t __cdecl internal_59dfd0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov al, byte ptr ss : [esp+0x10]
        and al, 0xE0
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x18]
        mov dl, cl
        shl dl, 1
        xor dl, al
        and dl, 2
        xor al, dl
        xor bl, bl
        test cl, cl
        sete cl
        xor cl, al
        and cl, 1
        xor al, cl
        mov ecx, dword ptr ds : [esi+8]
        test cl, 3
        setne dl
        shl dl, 2
        xor dl, al
        and dl, 4
        xor al, dl
        test cl, 0xC
        setne dl
        mov esi, dword ptr ds : [esi+4]
        shl dl, 3
        xor dl, al
        and dl, 8
        xor al, dl
        test cl, 0x30
        setne cl
        shl cl, 4
        xor cl, al
        and cl, 0x10
        xor al, cl
        mov ecx, dword ptr ds : [public_67dcdc]
        test ecx, ecx
        mov byte ptr ss : [esp+0x10], al
        je public_59e04c
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call dword ptr ds : [edx+0x50]
        pop edi
        pop esi
        pop ebx
        ret 
        public_59e04c : nop
        mov edi, dword ptr ds : [public_67dbe8]
        test edi, edi
        je public_59e073
        public_59e056 : nop
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_59e06c
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call dword ptr ds : [edx+0x50]
        or bl, al
        jne public_59e073
        public_59e06c : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_59e056
        public_59e073 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59dfd0)
    }
}

#undef public_59e04c
#undef public_59e056
#undef public_59e06c
#undef public_59e073
