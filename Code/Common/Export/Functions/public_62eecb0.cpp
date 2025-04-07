#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62eecc0 _public_62eecc0
#define public_62eecc9 _public_62eecc9
#define public_62eeccb _public_62eeccb
#define public_62eece0 _public_62eece0
#define public_62eece7 _public_62eece7
#define public_62eecfa _public_62eecfa
#define public_62eed03 _public_62eed03
#define public_62eed07 _public_62eed07

PROC_DECLARE(0x62eecb0, internal_62eecb0, public_62eecb0);
extern "C" NAKED register_t __cdecl internal_62eecb0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        lea esp, ss:[esp]
        public_62eecc0 : nop
        cmp esi, ebx
        jne public_62eecc9
        mov esi, dword ptr ds : [edi+4]
        jmp public_62eeccb
        public_62eecc9 : nop
        mov esi, dword ptr ds : [esi]
        public_62eeccb : nop
        cmp esi, ebx
        je public_62eece0
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_62eecc0
        public_62eece0 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_62eed07
        public_62eece7 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_62eecfa
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_62eed03
        public_62eecfa : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62eed03 : nop
        cmp esi, ebx
        jne public_62eece7
        public_62eed07 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62eecb0)
    }
}

#undef public_62eecc0
#undef public_62eecc9
#undef public_62eeccb
#undef public_62eece0
#undef public_62eece7
#undef public_62eecfa
#undef public_62eed03
#undef public_62eed07
