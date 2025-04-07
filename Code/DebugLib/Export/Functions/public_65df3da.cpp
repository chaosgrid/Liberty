#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);
CLANG_FORWARD_PROC_SYMBOL(public_65de91b);
CLANG_FORWARD_PROC_SYMBOL(public_65de95d);
CLANG_FORWARD_PROC_SYMBOL(public_65de9bc);
CLANG_FORWARD_PROC_SYMBOL(public_65df3da);

#define public_65df435 _public_65df435
#define public_65df437 _public_65df437
#define public_65df442 _public_65df442
#define public_65df450 _public_65df450
#define public_65df45b _public_65df45b
#define public_65df469 _public_65df469

PROC_DECLARE(0x65df3da, internal_65df3da, public_65df3da);
extern "C" NAKED register_t __cdecl internal_65df3da()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, dword ptr ds : [public_65e7a40]
        push esi
        push edi
        jae public_65df45b
        mov eax, ebx
        sar eax, 5
        lea edi, ds : [eax*4+public_65e7940]
        mov eax, ebx
        and eax, 0x1F
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [edi]
        shl esi, 2
        test byte ptr ds : [eax+esi+4], 1
        je public_65df45b
        push ebx
        call public_65de95d
        mov eax, dword ptr ds : [edi]
        pop ecx
        test byte ptr ds : [eax+esi+4], 1
        je public_65df442
        push ebx
        call public_65de91b
        pop ecx
        push eax
        call dword ptr ds : [public_65e1028]
        test eax, eax
        jne public_65df435
        call dword ptr ds : [public_65e107c]
        mov esi, eax
        jmp public_65df437
        public_65df435 : nop
        xor esi, esi
        public_65df437 : nop
        test esi, esi
        je public_65df450
        call public_65de893
        mov dword ptr ds : [eax], esi
        public_65df442 : nop
        call public_65de88a
        mov dword ptr ds : [eax], 9
        or esi, 0xFFFFFFFF
        public_65df450 : nop
        push ebx
        call public_65de9bc
        pop ecx
        mov eax, esi
        jmp public_65df469
        public_65df45b : nop
        call public_65de88a
        mov dword ptr ds : [eax], 9
        or eax, 0xFFFFFFFF
        public_65df469 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65df3da)
    }
}

#undef public_65df435
#undef public_65df437
#undef public_65df442
#undef public_65df450
#undef public_65df45b
#undef public_65df469
