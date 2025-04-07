#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65def26);
CLANG_FORWARD_PROC_SYMBOL(public_65df8ee);

#define public_65df900 _public_65df900
#define public_65df91f _public_65df91f
#define public_65df929 _public_65df929
#define public_65df936 _public_65df936
#define public_65df939 _public_65df939

PROC_DECLARE(0x65df8ee, internal_65df8ee, public_65df8ee);
extern "C" NAKED register_t __cdecl internal_65df8ee()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_65e6154]
        push edi
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65df929
        mov edi, dword ptr ss : [esp+0x10]
        public_65df900 : nop
        push edi
        push eax
        push dword ptr ss : [esp+0x14]
        call public_65def26
        add esp, 0xC
        test eax, eax
        jne public_65df91f
        mov eax, dword ptr ds : [esi]
        mov al, byte ptr ds : [eax+edi]
        cmp al, 0x3D
        je public_65df939
        test al, al
        je public_65df939
        public_65df91f : nop
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        test eax, eax
        jne public_65df900
        public_65df929 : nop
        mov eax, esi
        sub eax, dword ptr ds : [public_65e6154]
        sar eax, 2
        neg eax
        public_65df936 : nop
        pop edi
        pop esi
        ret 
        public_65df939 : nop
        mov eax, esi
        sub eax, dword ptr ds : [public_65e6154]
        sar eax, 2
        jmp public_65df936
        UNREACHABLE_TRAP(0x65df8ee)
    }
}

#undef public_65df900
#undef public_65df91f
#undef public_65df929
#undef public_65df936
#undef public_65df939
