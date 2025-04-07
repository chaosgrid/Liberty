#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59220);
CLANG_FORWARD_PROC_SYMBOL(public_6d59e10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5928a _public_6d5928a
#define public_6d592a8 _public_6d592a8
#define public_6d592d0 _public_6d592d0
#define public_6d592db _public_6d592db
#define public_6d592f0 _public_6d592f0
#define public_6d592fc _public_6d592fc
#define public_6d59308 _public_6d59308

PROC_DECLARE(0x6d59220, internal_6d59220, public_6d59220);
extern "C" NAKED register_t __cdecl internal_6d59220()
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
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        jne public_6d592a8
        mov al, byte ptr ss : [ebp+0x14]
        push edi
        push 0x18
        mov byte ptr ss : [esp+0x14], al
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x14], dl
        mov byte ptr ds : [edi+0x15], 0
        call public_6d5c880
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6d5928a
        mov ebx, edi
        public_6d5928a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6d59e10
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6d59e10
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6d592a8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6d59308
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6d592db
        mov edi, edi
        public_6d592d0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d592d0
        public_6d592db : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6d592fc
        lea ecx, ds:[ecx]
        public_6d592f0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6d592f0
        public_6d592fc : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6d59308 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d59220)
    }
}

#undef public_6d5928a
#undef public_6d592a8
#undef public_6d592d0
#undef public_6d592db
#undef public_6d592f0
#undef public_6d592fc
#undef public_6d59308
