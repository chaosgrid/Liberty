#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f31980);

#define public_6f2f384 _public_6f2f384
#define public_6f2f3a6 _public_6f2f3a6
#define public_6f2f3b0 _public_6f2f3b0
#define public_6f2f3ba _public_6f2f3ba
#define public_6f2f3c1 _public_6f2f3c1
#define public_6f2f3ca _public_6f2f3ca

PROC_DECLARE(0x6f2f370, internal_6f2f370, public_6f2f370);
extern "C" NAKED register_t __cdecl internal_6f2f370()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edx]
        je public_6f2f3ca
        push esi
        push edi
        public_6f2f384 : nop
        mov esi, dword ptr ds : [eax+0x10]
        lea edi, ds:[ebx+8]
        mov ecx, 5
        rep movsd
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6f2f3a6
        push ecx
        call public_6f31980
        add esp, 4
        jmp public_6f2f3c1
        public_6f2f3a6 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f2f3ba
        mov edi, edi
        public_6f2f3b0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f2f3b0
        public_6f2f3ba : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f2f3c1
        mov eax, ecx
        public_6f2f3c1 : nop
        cmp eax, dword ptr ss : [ebp+0x14]
        mov ebx, dword ptr ds : [ebx]
        jne public_6f2f384
        pop edi
        pop esi
        public_6f2f3ca : nop
        lea ecx, ss:[ebp+4]
        pop ebp
        pop ebx
        jmp public_6f30d20
        UNREACHABLE_TRAP(0x6f2f370)
    }
}

#undef public_6f2f384
#undef public_6f2f3a6
#undef public_6f2f3b0
#undef public_6f2f3ba
#undef public_6f2f3c1
#undef public_6f2f3ca
