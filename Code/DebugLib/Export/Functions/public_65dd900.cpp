#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd900);

#define public_65dd922 _public_65dd922
#define public_65dd930 _public_65dd930
#define public_65dd95e _public_65dd95e
#define public_65dd95f _public_65dd95f
#define public_65dd963 _public_65dd963

PROC_DECLARE(0x65dd900, internal_65dd900, public_65dd900);
extern "C" NAKED register_t __cdecl internal_65dd900()
{
    __asm
    {
        push ebx
        push esi
        mov eax, dword ptr ss : [esp+0x18]
        or eax, eax
        jne public_65dd922
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xC]
        div ecx
        mov edx, ebx
        jmp public_65dd963
        public_65dd922 : nop
        mov ecx, eax
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        public_65dd930 : nop
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jne public_65dd930
        div ebx
        mov esi, eax
        mul dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mul esi
        add edx, ecx
        jb public_65dd95e
        cmp edx, dword ptr ss : [esp+0x10]
        ja public_65dd95e
        jb public_65dd95f
        cmp eax, dword ptr ss : [esp+0xC]
        jbe public_65dd95f
        public_65dd95e : nop
        dec esi
        public_65dd95f : nop
        xor edx, edx
        mov eax, esi
        public_65dd963 : nop
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65dd900)
    }
}

#undef public_65dd922
#undef public_65dd930
#undef public_65dd95e
#undef public_65dd95f
#undef public_65dd963
