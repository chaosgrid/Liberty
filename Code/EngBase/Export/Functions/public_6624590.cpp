#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624590);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66245b7 _public_66245b7
#define public_66245c1 _public_66245c1
#define public_6624600 _public_6624600
#define public_662460a _public_662460a

PROC_DECLARE(0x6624590, internal_6624590, public_6624590);
extern "C" NAKED register_t __cdecl internal_6624590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b18c]
        push ebx
        xor ebx, ebx
        push esi
        cmp eax, ebx
        push edi
        mov esi, ecx
        je public_66245b7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_662b18c], ecx
        mov ecx, dword ptr ds : [public_662b198]
        dec ecx
        mov dword ptr ds : [public_662b198], ecx
        jmp public_66245c1
        public_66245b7 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        public_66245c1 : nop
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ds : [public_662b18c]
        mov edi, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6624600
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_662b18c], ecx
        mov ecx, dword ptr ds : [public_662b198]
        dec ecx
        mov dword ptr ds : [public_662b198], ecx
        jmp public_662460a
        public_6624600 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        public_662460a : nop
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6624590)
    }
}

#undef public_66245b7
#undef public_66245c1
#undef public_6624600
#undef public_662460a
