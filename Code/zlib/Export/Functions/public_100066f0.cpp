#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100066f0);

#define public_10006715 _public_10006715
#define public_10006720 _public_10006720
#define public_10006733 _public_10006733
#define public_10006755 _public_10006755
#define public_10006791 _public_10006791
#define public_100067a3 _public_100067a3
#define public_100067b6 _public_100067b6
#define public_100067d8 _public_100067d8
#define public_100067fe _public_100067fe

PROC_DECLARE(0x100066f0, internal_100066f0, public_100066f0);
extern "C" NAKED register_t __cdecl internal_100066f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ds : [ebx+0x30]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x18], edi
        jbe public_10006715
        mov ebp, dword ptr ds : [ebx+0x2C]
        public_10006715 : nop
        mov eax, dword ptr ds : [esi+0x10]
        sub ebp, edi
        cmp ebp, eax
        jbe public_10006720
        mov ebp, eax
        public_10006720 : nop
        test ebp, ebp
        je public_10006733
        cmp dword ptr ss : [esp+0x20], 0xFFFFFFFB
        jne public_10006733
        mov dword ptr ss : [esp+0x20], 0
        public_10006733 : nop
        mov edx, dword ptr ds : [esi+0x14]
        sub eax, ebp
        add edx, ebp
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_10006755
        mov ecx, dword ptr ds : [ebx+0x3C]
        push ebp
        push edi
        push ecx
        call eax
        mov dword ptr ds : [ebx+0x3C], eax
        mov dword ptr ds : [esi+0x30], eax
        public_10006755 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0x2C]
        add edi, ebp
        add eax, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edi
        jne public_100067fe
        cmp dword ptr ds : [ebx+0x34], ecx
        mov esi, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [esp+0x18], esi
        jne public_10006791
        mov dword ptr ds : [ebx+0x34], esi
        public_10006791 : nop
        mov ebp, dword ptr ds : [ebx+0x34]
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x10]
        sub ebp, esi
        cmp ebp, eax
        jbe public_100067a3
        mov ebp, eax
        public_100067a3 : nop
        test ebp, ebp
        je public_100067b6
        cmp dword ptr ss : [esp+0x20], 0xFFFFFFFB
        jne public_100067b6
        mov dword ptr ss : [esp+0x20], 0
        public_100067b6 : nop
        mov edx, dword ptr ds : [edi+0x14]
        sub eax, ebp
        add edx, ebp
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0x14], edx
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_100067d8
        mov ecx, dword ptr ds : [ebx+0x3C]
        push ebp
        push esi
        push ecx
        call eax
        mov dword ptr ds : [ebx+0x3C], eax
        mov dword ptr ds : [edi+0x30], eax
        public_100067d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, edx
        and ecx, 3
        add eax, ebp
        rep movsb
        mov dword ptr ss : [esp+0x18], eax
        public_100067fe : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ebx+0x30], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x100066f0)
    }
}

#undef public_10006715
#undef public_10006720
#undef public_10006733
#undef public_10006755
#undef public_10006791
#undef public_100067a3
#undef public_100067b6
#undef public_100067d8
#undef public_100067fe
