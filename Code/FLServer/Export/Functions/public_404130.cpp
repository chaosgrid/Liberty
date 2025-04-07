#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404130);
CLANG_FORWARD_PROC_SYMBOL(public_404f60);
CLANG_FORWARD_PROC_SYMBOL(public_405a40);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_40419a _public_40419a
#define public_4041b8 _public_4041b8
#define public_4041e0 _public_4041e0
#define public_4041eb _public_4041eb
#define public_404200 _public_404200
#define public_40420c _public_40420c
#define public_404218 _public_404218

PROC_DECLARE(0x404130, internal_404130, public_404130);
extern "C" NAKED register_t __cdecl internal_404130()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x21]
        test al, al
        jne public_4041b8
        mov al, byte ptr ss : [ebp+0x20]
        push edi
        push 0x24
        mov byte ptr ss : [esp+0x14], al
        call public_418a9e
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x20], dl
        mov byte ptr ds : [edi+0x21], 0
        call public_405a40
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_40419a
        mov ebx, edi
        public_40419a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_404f60
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_404f60
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_4041b8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_404218
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_4041eb
        mov edi, edi
        public_4041e0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_4041e0
        public_4041eb : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        jne public_40420c
        lea ecx, ds:[ecx]
        public_404200 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        je public_404200
        public_40420c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_404218 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x404130)
    }
}

#undef public_40419a
#undef public_4041b8
#undef public_4041e0
#undef public_4041eb
#undef public_404200
#undef public_40420c
#undef public_404218
