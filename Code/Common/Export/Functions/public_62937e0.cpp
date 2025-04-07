#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f700);

#define public_629383f _public_629383f
#define public_6293850 _public_6293850
#define public_6293869 _public_6293869
#define public_6293880 _public_6293880
#define public_62938a3 _public_62938a3
#define public_62938a7 _public_62938a7
#define public_62938ac _public_62938ac

PROC_DECLARE(0x62937e0, internal_62937e0, public_62937e0);
extern "C" NAKED register_t __cdecl internal_62937e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov bl, byte ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        cmp bl, byte ptr ds : [esi+0xC]
        je public_62938ac
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        je public_62938ac
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test bl, bl
        mov dword ptr ss : [esp+0x18], eax
        je public_629383f
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], ecx
        mov cl, byte ptr ds : [esi+0xD]
        mov dword ptr ss : [esp+0xC], edx
        lea edx, ss:[esp+8]
        mov byte ptr ss : [esp+0x10], cl
        lea ecx, ds:[eax+0x64]
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        call public_628f700
        mov byte ptr ds : [esi+0xC], 1
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_629383f : nop
        mov ecx, dword ptr ds : [eax+0x68]
        mov edx, dword ptr ds : [eax+0x6C]
        cmp ecx, edx
        push edi
        je public_62938a7
        mov edi, dword ptr ds : [esi+4]
        lea ecx, ds:[ecx]
        public_6293850 : nop
        cmp edi, dword ptr ds : [ecx+4]
        je public_6293869
        add ecx, 0xC
        cmp ecx, edx
        jne public_6293850
        pop edi
        mov byte ptr ds : [esi+0xC], 0
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_6293869 : nop
        mov dl, byte ptr ds : [ecx+8]
        mov byte ptr ds : [esi+0xD], dl
        mov edi, dword ptr ds : [eax+0x6C]
        add ecx, 0xC
        cmp ecx, edi
        je public_62938a3
        lea edx, ds:[ecx-0xC]
        push ebp
        lea ecx, ds:[ecx]
        public_6293880 : nop
        mov eax, ecx
        mov ebp, dword ptr ds : [eax]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        add ecx, 0xC
        add edx, 0xC
        cmp ecx, edi
        mov dword ptr ds : [ebx+8], eax
        jne public_6293880
        mov eax, dword ptr ss : [esp+0x20]
        pop ebp
        public_62938a3 : nop
        add dword ptr ds : [eax+0x6C], 0xFFFFFFF4
        public_62938a7 : nop
        mov byte ptr ds : [esi+0xC], 0
        pop edi
        public_62938ac : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62937e0)
    }
}

#undef public_629383f
#undef public_6293850
#undef public_6293869
#undef public_6293880
#undef public_62938a3
#undef public_62938a7
#undef public_62938ac
