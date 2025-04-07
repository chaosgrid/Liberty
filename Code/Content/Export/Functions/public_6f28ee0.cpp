#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28ee0);

#define public_6f28ef7 _public_6f28ef7
#define public_6f28f0f _public_6f28f0f
#define public_6f28f27 _public_6f28f27
#define public_6f28f48 _public_6f28f48
#define public_6f28f55 _public_6f28f55

PROC_DECLARE(0x6f28ee0, internal_6f28ee0, public_6f28ee0);
extern "C" NAKED register_t __cdecl internal_6f28ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ss : [esp+4], eax
        je public_6f28f55
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+4]
        xor ecx, ecx
        public_6f28ef7 : nop
        sub eax, 0x34
        sub ebp, 0x34
        sub edx, 0x34
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f28f0f
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_6f28f48
        public_6f28f0f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f28f27
        mov eax, 0x2F
        public_6f28f27 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, ebp
        lea edi, ds:[edx+4]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+4], cl
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        public_6f28f48 : nop
        cmp eax, dword ptr ss : [esp+0x14]
        jne public_6f28ef7
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        ret 
        public_6f28f55 : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x6f28ee0)
    }
}

#undef public_6f28ef7
#undef public_6f28f0f
#undef public_6f28f27
#undef public_6f28f48
#undef public_6f28f55
