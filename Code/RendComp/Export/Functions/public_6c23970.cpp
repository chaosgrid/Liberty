#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26610);
CLANG_FORWARD_PROC_SYMBOL(public_6c29000);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c23987 _public_6c23987
#define public_6c23997 _public_6c23997
#define public_6c239a8 _public_6c239a8
#define public_6c239ea _public_6c239ea
#define public_6c23a15 _public_6c23a15
#define public_6c23a49 _public_6c23a49
#define public_6c23a7d _public_6c23a7d
#define public_6c23aa8 _public_6c23aa8
#define public_6c23ac1 _public_6c23ac1
#define public_6c23ae8 _public_6c23ae8
#define public_6c23b00 _public_6c23b00
#define public_6c23b28 _public_6c23b28
#define public_6c23b42 _public_6c23b42
#define public_6c23b6a _public_6c23b6a
#define public_6c23b84 _public_6c23b84
#define public_6c23bac _public_6c23bac
#define public_6c23bb7 _public_6c23bb7
#define public_6c23bbf _public_6c23bbf

PROC_DECLARE(0x6c23970, internal_6c23970, public_6c23970);
extern "C" NAKED register_t __cdecl internal_6c23970()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c23987
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6c23987 : nop
        cmp dword ptr ds : [esi+0x218], 2
        je public_6c23997
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6c23997 : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        test eax, eax
        je public_6c239a8
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6c239a8 : nop
        push ebp
        push edi
        mov ecx, esi
        or ebp, 0xFFFFFFFF
        call public_6c26610
        mov ecx, dword ptr ds : [esi+0x1E8]
        test byte ptr ss : [esp+0x14], 1
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edi+0x2C]
        je public_6c239ea
        mov eax, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        test eax, eax
        jne public_6c239ea
        mov edx, dword ptr ds : [esi+0x6C]
        shl edx, 2
        push edx
        call public_6c34eac
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 4
        or eax, 2
        mov dword ptr ds : [esi+0x68], eax
        public_6c239ea : nop
        test byte ptr ss : [esp+0x14], 8
        je public_6c23a15
        mov eax, dword ptr ds : [esi+0x24]
        xor ebp, ebp
        test eax, eax
        jne public_6c23a15
        mov eax, dword ptr ds : [esi+0x6C]
        shl eax, 2
        push eax
        call public_6c34eac
        mov dword ptr ds : [esi+0x24], eax
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 4
        or eax, 0x10
        mov dword ptr ds : [esi+0x68], eax
        public_6c23a15 : nop
        test byte ptr ss : [esp+0x14], 2
        je public_6c23a49
        mov eax, dword ptr ds : [esi+0x4C]
        xor ebp, ebp
        test eax, eax
        jne public_6c23a49
        mov ecx, dword ptr ds : [esi+0x6C]
        shl ecx, 2
        push ecx
        call public_6c34eac
        mov edx, dword ptr ds : [esi+0x68]
        and edx, 0xFFFFF1FF
        add esp, 4
        or edx, 0x100
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x68], edx
        public_6c23a49 : nop
        test byte ptr ss : [esp+0x14], 4
        je public_6c23a7d
        mov eax, dword ptr ds : [esi+0x60]
        xor ebp, ebp
        test eax, eax
        jne public_6c23a7d
        mov eax, dword ptr ds : [esi+0x6C]
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi+0x68]
        and ecx, 0xFFFFF2FF
        add esp, 4
        or ecx, 0x200
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x68], ecx
        public_6c23a7d : nop
        test byte ptr ss : [esp+0x14], 0x10
        je public_6c23aa8
        mov eax, dword ptr ds : [esi+0x38]
        xor ebp, ebp
        test eax, eax
        jne public_6c23aa8
        mov edx, dword ptr ds : [esi+0x6C]
        shl edx, 2
        push edx
        call public_6c34eac
        mov dword ptr ds : [esi+0x38], eax
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 4
        or eax, 0x40
        mov dword ptr ds : [esi+0x68], eax
        public_6c23aa8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test ah, 0x40
        je public_6c23ae8
        mov eax, dword ptr ds : [edi+0x38]
        xor ebp, ebp
        test eax, eax
        jne public_6c23ac1
        mov ecx, edi
        call public_6c29000
        public_6c23ac1 : nop
        mov eax, dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_6c23ae8
        mov ecx, dword ptr ds : [esi+0x6C]
        shl ecx, 2
        push ecx
        call public_6c34eac
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [esi+0x6C]
        add esp, 4
        mov dword ptr ds : [eax], ecx
        public_6c23ae8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test ah, ah
        jns public_6c23b28
        mov eax, dword ptr ds : [edi+0x38]
        xor ebp, ebp
        test eax, eax
        jne public_6c23b00
        mov ecx, edi
        call public_6c29000
        public_6c23b00 : nop
        mov edx, dword ptr ds : [edi+0x38]
        mov eax, dword ptr ds : [edx+0x20]
        test eax, eax
        jne public_6c23b28
        mov eax, dword ptr ds : [esi+0x6C]
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [esi+0x6C]
        add esp, 4
        mov dword ptr ds : [edx+4], eax
        public_6c23b28 : nop
        test dword ptr ss : [esp+0x14], 0x10000
        je public_6c23b6a
        mov eax, dword ptr ds : [edi+0x38]
        xor ebp, ebp
        test eax, eax
        jne public_6c23b42
        mov ecx, edi
        call public_6c29000
        public_6c23b42 : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov eax, dword ptr ds : [ecx+0x34]
        test eax, eax
        jne public_6c23b6a
        mov edx, dword ptr ds : [esi+0x6C]
        shl edx, 2
        push edx
        call public_6c34eac
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [ecx+0x34], eax
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [esi+0x6C]
        add esp, 4
        mov dword ptr ds : [edx+8], eax
        public_6c23b6a : nop
        test dword ptr ss : [esp+0x14], 0x20000
        je public_6c23bac
        mov eax, dword ptr ds : [edi+0x38]
        xor ebp, ebp
        test eax, eax
        jne public_6c23b84
        mov ecx, edi
        call public_6c29000
        public_6c23b84 : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov eax, dword ptr ds : [ecx+0x48]
        test eax, eax
        jne public_6c23bac
        mov edx, dword ptr ds : [esi+0x6C]
        shl edx, 2
        push edx
        call public_6c34eac
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [ecx+0x48], eax
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [esi+0x6C]
        add esp, 4
        mov dword ptr ds : [edx+0xC], eax
        public_6c23bac : nop
        mov eax, dword ptr ss : [esp+0x14]
        test al, al
        jns public_6c23bb7
        or ebp, 0xFFFFFFFF
        public_6c23bb7 : nop
        test ah, 1
        je public_6c23bbf
        or ebp, 0xFFFFFFFF
        public_6c23bbf : nop
        pop edi
        mov eax, ebp
        pop ebp
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c23970)
    }
}

#undef public_6c23987
#undef public_6c23997
#undef public_6c239a8
#undef public_6c239ea
#undef public_6c23a15
#undef public_6c23a49
#undef public_6c23a7d
#undef public_6c23aa8
#undef public_6c23ac1
#undef public_6c23ae8
#undef public_6c23b00
#undef public_6c23b28
#undef public_6c23b42
#undef public_6c23b6a
#undef public_6c23b84
#undef public_6c23bac
#undef public_6c23bb7
#undef public_6c23bbf
