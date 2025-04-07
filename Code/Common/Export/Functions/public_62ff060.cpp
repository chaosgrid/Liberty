#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62ff086 _public_62ff086
#define public_62ff0a6 _public_62ff0a6
#define public_62ff0cf _public_62ff0cf
#define public_62ff0df _public_62ff0df
#define public_62ff0eb _public_62ff0eb
#define public_62ff0f5 _public_62ff0f5
#define public_62ff0fe _public_62ff0fe
#define public_62ff123 _public_62ff123

PROC_DECLARE(0x62ff060, internal_62ff060, public_62ff060);
extern "C" NAKED register_t __cdecl internal_62ff060()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ff086
        push edi
        call public_630d3f0
        add esp, 4
        public_62ff086 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        lea ebp, ds:[esi+4]
        jbe public_62ff0a6
        call dword ptr ds : [public_63991b4]
        public_62ff0a6 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_62ff0cf
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_62ff0cf
        cmp cl, 0xFF
        je public_62ff0cf
        cmp ebx, edx
        jne public_62ff0f5
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        jmp public_62ff123
        public_62ff0cf : nop
        cmp ebx, edx
        jne public_62ff0df
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        jmp public_62ff123
        public_62ff0df : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_62ff0eb
        cmp eax, ebx
        jae public_62ff0fe
        public_62ff0eb : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        public_62ff0f5 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_63991b0]
        public_62ff0fe : nop
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_62ff123 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x18], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x62ff060)
    }
}

#undef public_62ff086
#undef public_62ff0a6
#undef public_62ff0cf
#undef public_62ff0df
#undef public_62ff0eb
#undef public_62ff0f5
#undef public_62ff0fe
#undef public_62ff123
