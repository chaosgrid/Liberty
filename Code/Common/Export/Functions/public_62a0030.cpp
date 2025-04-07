#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0030);

#define public_62a0040 _public_62a0040
#define public_62a0048 _public_62a0048
#define public_62a004b _public_62a004b
#define public_62a0060 _public_62a0060
#define public_62a0080 _public_62a0080
#define public_62a0084 _public_62a0084
#define public_62a0089 _public_62a0089
#define public_62a0096 _public_62a0096

PROC_DECLARE(0x62a0030, internal_62a0030, public_62a0030);
extern "C" NAKED register_t __cdecl internal_62a0030()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov ebx, ecx
        xor edi, edi
        lea esp, ss:[esp]
        public_62a0040 : nop
        test edi, edi
        jne public_62a0048
        mov edi, dword ptr ds : [ebx]
        jmp public_62a004b
        public_62a0048 : nop
        mov edi, dword ptr ds : [edi+4]
        public_62a004b : nop
        test edi, edi
        je public_62a0096
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov esi, eax
        mov ecx, ebp
        lea esp, ss:[esp]
        public_62a0060 : nop
        mov dl, byte ptr ds : [ecx]
        mov al, dl
        cmp dl, byte ptr ds : [esi]
        jne public_62a0084
        test al, al
        je public_62a0080
        mov dl, byte ptr ds : [ecx+1]
        mov al, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_62a0084
        add ecx, 2
        add esi, 2
        test al, al
        jne public_62a0060
        public_62a0080 : nop
        xor eax, eax
        jmp public_62a0089
        public_62a0084 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62a0089 : nop
        test eax, eax
        jne public_62a0040
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_62a0096 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a0030)
    }
}

#undef public_62a0040
#undef public_62a0048
#undef public_62a004b
#undef public_62a0060
#undef public_62a0080
#undef public_62a0084
#undef public_62a0089
#undef public_62a0096
