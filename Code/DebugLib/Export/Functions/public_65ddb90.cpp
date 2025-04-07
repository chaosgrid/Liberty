#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);
CLANG_FORWARD_PROC_SYMBOL(public_65deb9f);

#define public_65ddbae _public_65ddbae
#define public_65ddbd3 _public_65ddbd3
#define public_65ddbdc _public_65ddbdc
#define public_65ddbfc _public_65ddbfc
#define public_65ddc00 _public_65ddc00

PROC_DECLARE(0x65ddb90, internal_65ddb90, public_65ddb90);
extern "C" NAKED register_t __cdecl internal_65ddb90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+1]
        cmp ecx, 0x100
        ja public_65ddbae
        mov ecx, dword ptr ds : [public_65e59d0]
        movzx eax, word ptr ds : [ecx+eax*2]
        jmp public_65ddc00
        public_65ddbae : nop
        mov ecx, eax
        push esi
        mov esi, dword ptr ds : [public_65e59d0]
        sar ecx, 8
        movzx edx, cl
        test byte ptr ds : [esi+edx*2+1], 0x80
        pop esi
        je public_65ddbd3
        and byte ptr ss : [ebp-2], 0
        mov byte ptr ss : [ebp-4], cl
        mov byte ptr ss : [ebp-3], al
        push 2
        jmp public_65ddbdc
        public_65ddbd3 : nop
        and byte ptr ss : [ebp-3], 0
        mov byte ptr ss : [ebp-4], al
        push 1
        public_65ddbdc : nop
        pop eax
        lea ecx, ss:[ebp+0xA]
        push 1
        push 0
        push 0
        push ecx
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push 1
        call public_65deb9f
        add esp, 0x1C
        test eax, eax
        jne public_65ddbfc
        leave 
        ret 
        public_65ddbfc : nop
        movzx eax, word ptr ss : [ebp+0xA]
        public_65ddc00 : nop
        and eax, dword ptr ss : [ebp+0xC]
        leave 
        ret 
        UNREACHABLE_TRAP(0x65ddb90)
    }
}

#undef public_65ddbae
#undef public_65ddbd3
#undef public_65ddbdc
#undef public_65ddbfc
#undef public_65ddc00
