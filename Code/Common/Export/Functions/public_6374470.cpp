#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6374470);

#define public_637448b _public_637448b
#define public_6374496 _public_6374496
#define public_63744a0 _public_63744a0
#define public_63744ac _public_63744ac
#define public_63744c0 _public_63744c0
#define public_63744de _public_63744de
#define public_63744e7 _public_63744e7
#define public_63744f4 _public_63744f4
#define public_6374508 _public_6374508
#define public_6374517 _public_6374517
#define public_6374530 _public_6374530
#define public_6374547 _public_6374547

PROC_DECLARE(0x6374470, internal_6374470, public_6374470);
extern "C" NAKED register_t __cdecl internal_6374470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        xor edi, edi
        xor esi, esi
        xor edx, edx
        cmp eax, edi
        mov eax, dword ptr ds : [public_658b840]
        je public_63744de
        mov ecx, eax
        cmp ecx, edi
        je public_6374496
        public_637448b : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edi
        je public_6374496
        inc edx
        cmp ecx, edi
        jne public_637448b
        public_6374496 : nop
        mov ecx, dword ptr ds : [public_658b81c]
        cmp ecx, edi
        je public_63744ac
        public_63744a0 : nop
        mov ecx, dword ptr ds : [ecx+0x30]
        cmp ecx, edi
        je public_63744ac
        inc esi
        cmp ecx, edi
        jne public_63744a0
        public_63744ac : nop
        add dword ptr ds : [public_658bfc8], edx
        cmp dword ptr ds : [public_658bfd0], edx
        jge public_63744c0
        mov dword ptr ds : [public_658bfd0], edx
        public_63744c0 : nop
        mov edx, dword ptr ds : [public_658bdb0]
        mov ecx, dword ptr ds : [public_658bdb8]
        add edx, esi
        cmp ecx, esi
        mov dword ptr ds : [public_658bdb0], edx
        jge public_63744de
        mov dword ptr ds : [public_658bdb8], esi
        public_63744de : nop
        cmp eax, edi
        je public_63744f4
        mov ecx, 0xEFFFFFFF
        public_63744e7 : nop
        cmp dword ptr ds : [eax], edi
        je public_63744f4
        and dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        jne public_63744e7
        public_63744f4 : nop
        mov eax, dword ptr ds : [public_658b81c]
        cmp eax, edi
        mov dword ptr ds : [public_658b840], edi
        je public_6374517
        mov ecx, 0xFFFFFDFF
        public_6374508 : nop
        cmp dword ptr ds : [eax+0x30], edi
        je public_6374517
        and dword ptr ds : [eax+0x50], ecx
        mov eax, dword ptr ds : [eax+0x30]
        cmp eax, edi
        jne public_6374508
        public_6374517 : nop
        mov eax, dword ptr ds : [public_658b820]
        cmp eax, edi
        mov dword ptr ds : [public_658b81c], edi
        je public_6374547
        mov edx, 0x400
        mov ecx, 0xFFFFFBFF
        public_6374530 : nop
        test dword ptr ds : [eax+0x50], edx
        je public_6374547
        mov esi, dword ptr ds : [eax+0x50]
        and esi, ecx
        mov dword ptr ds : [eax+0x20], edi
        mov dword ptr ds : [eax+0x50], esi
        mov eax, dword ptr ds : [eax+0x30]
        cmp eax, edi
        jne public_6374530
        public_6374547 : nop
        mov dword ptr ds : [public_658b820], edi
        mov dword ptr ds : [public_658b824], edi
        mov dword ptr ds : [public_658b8a0], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6374470)
    }
}

#undef public_637448b
#undef public_6374496
#undef public_63744a0
#undef public_63744ac
#undef public_63744c0
#undef public_63744de
#undef public_63744e7
#undef public_63744f4
#undef public_6374508
#undef public_6374517
#undef public_6374530
#undef public_6374547
