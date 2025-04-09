#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_512b00);

#define public_512b17 _public_512b17
#define public_512b30 _public_512b30
#define public_512b3e _public_512b3e
#define public_512b42 _public_512b42
#define public_512b48 _public_512b48
#define public_512b55 _public_512b55
#define public_512b57 _public_512b57
#define public_512b5f _public_512b5f

PROC_DECLARE(0x512b00, internal_512b00, public_512b00);
extern "C" NAKED register_t __cdecl internal_512b00()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebx, ebp
        push edi
        je public_512b5f
        lea edi, ds:[ebx+4]
        cmp edi, ebp
        je public_512b5f
        push esi
        public_512b17 : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, dword ptr ds : [ebx]
        jb public_512b42
        mov ecx, dword ptr ds : [edi-4]
        cmp esi, ecx
        lea eax, ds:[edi-4]
        mov edx, edi
        jae public_512b3e
        lea esp, ss:[esp]
        public_512b30 : nop
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax-4]
        mov edx, eax
        sub eax, 4
        cmp esi, ecx
        jb public_512b30
        public_512b3e : nop
        mov dword ptr ds : [edx], esi
        jmp public_512b57
        public_512b42 : nop
        cmp ebx, edi
        mov eax, edi
        je public_512b55
        public_512b48 : nop
        mov ecx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebx
        mov dword ptr ds : [eax+4], ecx
        jne public_512b48
        public_512b55 : nop
        mov dword ptr ds : [ebx], esi
        public_512b57 : nop
        add edi, 4
        cmp edi, ebp
        jne public_512b17
        pop esi
        public_512b5f : nop
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x512b00)
    }
}

#undef public_512b17
#undef public_512b30
#undef public_512b3e
#undef public_512b42
#undef public_512b48
#undef public_512b55
#undef public_512b57
#undef public_512b5f
