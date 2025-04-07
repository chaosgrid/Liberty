#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);
CLANG_FORWARD_PROC_SYMBOL(public_65de89c);

#define public_65de8ea _public_65de8ea
#define public_65de8ef _public_65de8ef
#define public_65de8f2 _public_65de8f2
#define public_65de8f8 _public_65de8f8
#define public_65de902 _public_65de902
#define public_65de918 _public_65de918

PROC_DECLARE(0x65de89c, internal_65de89c, public_65de89c);
extern "C" NAKED register_t __cdecl internal_65de89c()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        cmp ecx, dword ptr ds : [public_65e7a40]
        push edi
        jae public_65de902
        mov eax, ecx
        sar eax, 5
        lea edi, ds : [eax*4+public_65e7940]
        mov eax, ecx
        and eax, 0x1F
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [edi]
        shl esi, 2
        add eax, esi
        test byte ptr ds : [eax+4], 1
        je public_65de902
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_65de902
        cmp dword ptr ds : [public_65e6130], 1
        jne public_65de8f8
        xor eax, eax
        sub ecx, eax
        je public_65de8ef
        dec ecx
        je public_65de8ea
        dec ecx
        jne public_65de8f8
        push eax
        push 0xFFFFFFF4
        jmp public_65de8f2
        public_65de8ea : nop
        push eax
        push 0xFFFFFFF5
        jmp public_65de8f2
        public_65de8ef : nop
        push eax
        push 0xFFFFFFF6
        public_65de8f2 : nop
        call dword ptr ds : [public_65e1114]
        public_65de8f8 : nop
        mov eax, dword ptr ds : [edi]
        or dword ptr ds : [eax+esi], 0xFFFFFFFF
        xor eax, eax
        jmp public_65de918
        public_65de902 : nop
        call public_65de88a
        mov dword ptr ds : [eax], 9
        call public_65de893
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        public_65de918 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65de89c)
    }
}

#undef public_65de8ea
#undef public_65de8ef
#undef public_65de8f2
#undef public_65de8f8
#undef public_65de902
#undef public_65de918
