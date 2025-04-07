#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef420f);
CLANG_FORWARD_PROC_SYMBOL(public_6ef42a6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef43a9);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4410);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5310);

#define public_6ef42be _public_6ef42be
#define public_6ef42d0 _public_6ef42d0
#define public_6ef42f2 _public_6ef42f2
#define public_6ef4306 _public_6ef4306
#define public_6ef4321 _public_6ef4321
#define public_6ef4335 _public_6ef4335
#define public_6ef434f _public_6ef434f
#define public_6ef436b _public_6ef436b

PROC_DECLARE(0x6ef42a6, internal_6ef42a6, public_6ef42a6);
extern "C" NAKED register_t __cdecl internal_6ef42a6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [ebx+8], eax
        jae public_6ef42be
        call public_6ef420f
        public_6ef42be : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        sub esi, ecx
        cmp dword ptr ss : [ebp+0x10], esi
        jae public_6ef42d0
        mov esi, dword ptr ss : [ebp+0x10]
        public_6ef42d0 : nop
        cmp edi, ebx
        jne public_6ef42f2
        push dword ptr ds : [public_6efc29c]
        add esi, ecx
        mov ecx, edi
        push esi
        call public_6ef43a9
        push dword ptr ss : [ebp+0xC]
        mov ecx, edi
        push 0
        call public_6ef43a9
        jmp public_6ef436b
        public_6ef42f2 : nop
        test esi, esi
        jbe public_6ef4335
        cmp esi, eax
        jne public_6ef4335
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ef4306
        mov eax, offset public_6efc14c
        public_6ef4306 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ef4335
        push 1
        mov ecx, edi
        call public_6ef2800
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ef4321
        mov eax, offset public_6efc14c
        public_6ef4321 : nop
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6ef436b
        public_6ef4335 : nop
        push 1
        push esi
        mov ecx, edi
        call public_6ef4410
        test al, al
        je public_6ef436b
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ef434f
        mov eax, offset public_6efc14c
        public_6ef434f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        add eax, ecx
        push eax
        push dword ptr ds : [edi+4]
        call public_6ef5310
        mov eax, dword ptr ds : [edi+4]
        add esp, 0xC
        mov dword ptr ds : [edi+8], esi
        and byte ptr ds : [eax+esi], 0
        public_6ef436b : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ef42a6)
    }
}

#undef public_6ef42be
#undef public_6ef42d0
#undef public_6ef42f2
#undef public_6ef4306
#undef public_6ef4321
#undef public_6ef4335
#undef public_6ef434f
#undef public_6ef436b
