#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4a8e80);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcd3a);

#define public_4a8f20 _public_4a8f20
#define public_4a8fbe _public_4a8fbe
#define public_4a8ffd _public_4a8ffd
#define public_4a9056 _public_4a9056
#define public_4a9071 _public_4a9071
#define public_4a907a _public_4a907a

PROC_DECLARE(0x4a8e80, internal_4a8e80, public_4a8e80);
extern "C" NAKED register_t __cdecl internal_4a8e80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bcd3a @0x4a8e88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcd3a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x410]
        xor ebp, ebp
        cmp ecx, ebp
        push edi
        je public_4a907a
        mov eax, dword ptr ds : [esi+0x414]
        sub eax, ecx
        sar eax, 3
        cmp eax, ebp
        je public_4a907a
        mov ebx, dword ptr ss : [esp+0x38]
        mov edi, ecx
        mov eax, dword ptr ds : [edi+ebx*8]
        push eax
        call dword ptr ds : [public_5c6350]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_4a907a
        mov ecx, dword ptr ds : [esi+0x330]
        mov edx, dword ptr ds : [edi+ebx*8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [public_5c608c]
        mov ecx, dword ptr ds : [esi+0x330]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        lea eax, ds:[esi+0x3CC]
        mov edx, 0xD
        mov bl, 0xFC
        lea ebx, ds:[ebx]
        public_4a8f20 : nop
        mov ecx, dword ptr ds : [eax-0x34]
        and byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [eax]
        and byte ptr ds : [ecx+0x6C], bl
        add eax, 4
        dec edx
        jne public_4a8f20
        mov eax, dword ptr ds : [esi+0x400]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 2
        or cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x404]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x408]
        or byte ptr ds : [eax+0x6C], cl
        mov al, byte ptr ss : [esp+0x38]
        push 0xC
        mov byte ptr ss : [esp+0x20], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebp
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        mov byte ptr ss : [esp+0x30], bl
        push 0xC
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_4a8fbe
        mov ebp, eax
        public_4a8fbe : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x38]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        mov byte ptr ss : [esp+0x30], 1
        je public_4a8ffd
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x38], 0
        public_4a8ffd : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x30], 0
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        call public_57da40
        mov esi, dword ptr ds : [esi+0x400]
        add esp, 8
        mov ecx, esi
        call public_57b370
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_57b3e0
        push 0
        push 0
        mov ecx, esi
        call public_5798b0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_4a9071
        public_4a9056 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_46d680
        cmp esi, edi
        jne public_4a9056
        mov eax, dword ptr ss : [esp+0x20]
        public_4a9071 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4a907a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x4a8e80)
    }
}

#undef public_4a8f20
#undef public_4a8fbe
#undef public_4a8ffd
#undef public_4a9056
#undef public_4a9071
#undef public_4a907a
