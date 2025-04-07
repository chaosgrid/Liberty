#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62798b0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62798b7 _public_62798b7
#define public_62798e3 _public_62798e3
#define public_62798f0 _public_62798f0
#define public_6279900 _public_6279900
#define public_627990e _public_627990e

PROC_DECLARE(0x62798b0, internal_62798b0, public_62798b0);
extern "C" NAKED register_t __cdecl internal_62798b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        push ebx
        public_62798b7 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_62798f0
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_62798f0
        mov ebx, dword ptr ds : [ecx+esi*4]
        test ebx, ebx
        je public_62798e3
        lea eax, ds:[ebx+4]
        push eax
        call public_6334430
        push ebx
        call public_6391d5a
        add esp, 8
        public_62798e3 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+esi*4], 0
        inc esi
        jmp public_62798b7
        public_62798f0 : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_627990e
        lea ecx, ds:[ecx]
        public_6279900 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6279900
        public_627990e : nop
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62798b0)
    }
}

#undef public_62798b7
#undef public_62798e3
#undef public_62798f0
#undef public_6279900
#undef public_627990e
