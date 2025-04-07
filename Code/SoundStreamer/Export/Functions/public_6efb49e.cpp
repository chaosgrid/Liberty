#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb49e);

#define public_6efb4e9 _public_6efb4e9
#define public_6efb4ee _public_6efb4ee
#define public_6efb4f1 _public_6efb4f1
#define public_6efb4f7 _public_6efb4f7
#define public_6efb501 _public_6efb501
#define public_6efb515 _public_6efb515

PROC_DECLARE(0x6efb49e, internal_6efb49e, public_6efb49e);
extern "C" NAKED register_t __cdecl internal_6efb49e()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        cmp ecx, dword ptr ds : [public_6f02640]
        push edi
        jae public_6efb501
        mov eax, ecx
        mov esi, ecx
        sar eax, 5
        and esi, 0x1F
        lea edi, ds : [eax*4+public_6f02540]
        shl esi, 3
        mov eax, dword ptr ds : [edi]
        add eax, esi
        test byte ptr ds : [eax+4], 1
        je public_6efb501
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6efb501
        cmp dword ptr ds : [public_6f010c0], 1
        jne public_6efb4f7
        xor eax, eax
        sub ecx, eax
        je public_6efb4ee
        dec ecx
        je public_6efb4e9
        dec ecx
        jne public_6efb4f7
        push eax
        push 0xFFFFFFF4
        jmp public_6efb4f1
        public_6efb4e9 : nop
        push eax
        push 0xFFFFFFF5
        jmp public_6efb4f1
        public_6efb4ee : nop
        push eax
        push 0xFFFFFFF6
        public_6efb4f1 : nop
        call dword ptr ds : [public_6efc064]
        public_6efb4f7 : nop
        mov eax, dword ptr ds : [edi]
        or dword ptr ds : [eax+esi], 0xFFFFFFFF
        xor eax, eax
        jmp public_6efb515
        public_6efb501 : nop
        and dword ptr ds : [public_6f010f4], 0
        mov dword ptr ds : [public_6f010f0], 9
        or eax, 0xFFFFFFFF
        public_6efb515 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efb49e)
    }
}

#undef public_6efb4e9
#undef public_6efb4ee
#undef public_6efb4f1
#undef public_6efb4f7
#undef public_6efb501
#undef public_6efb515
