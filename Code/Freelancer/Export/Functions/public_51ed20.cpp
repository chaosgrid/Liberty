#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ed20);

#define public_51ed30 _public_51ed30
#define public_51ed40 _public_51ed40
#define public_51ed4f _public_51ed4f
#define public_51ed71 _public_51ed71
#define public_51ed7f _public_51ed7f
#define public_51ed81 _public_51ed81

PROC_DECLARE(0x51ed20, internal_51ed20, public_51ed20);
extern "C" NAKED register_t __cdecl internal_51ed20()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c71d8]
        push esi
        push edi
        mov ebx, offset public_6752f8
        public_51ed30 : nop
        mov esi, dword ptr ds : [ebx-4]
        mov edi, dword ptr ds : [ebx]
        cmp esi, edi
        jae public_51ed4f
        lea esp, ss:[esp]
        public_51ed40 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call ebp
        add esi, 4
        add esp, 4
        cmp esi, edi
        jb public_51ed40
        public_51ed4f : nop
        mov edx, dword ptr ds : [ebx-4]
        test edx, edx
        mov dword ptr ss : [esp+0x10], 0
        je public_51ed81
        mov ecx, dword ptr ds : [ebx]
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        test eax, eax
        jbe public_51ed81
        mov eax, ecx
        cmp eax, ecx
        je public_51ed7f
        public_51ed71 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_51ed71
        public_51ed7f : nop
        mov dword ptr ds : [ebx], edx
        public_51ed81 : nop
        add ebx, 0x10
        cmp ebx, offset public_675348
        jl public_51ed30
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x51ed20)
    }
}

#undef public_51ed30
#undef public_51ed40
#undef public_51ed4f
#undef public_51ed71
#undef public_51ed7f
#undef public_51ed81
