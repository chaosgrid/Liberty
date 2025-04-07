#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d05320);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62956);

#define public_6d23d98 _public_6d23d98
#define public_6d23dc3 _public_6d23dc3
#define public_6d23dcc _public_6d23dcc
#define public_6d23de3 _public_6d23de3
#define public_6d23dff _public_6d23dff
#define public_6d23e1b _public_6d23e1b

PROC_DECLARE(0x6d23c70, internal_6d23c70, public_6d23c70);
extern "C" NAKED register_t __cdecl internal_6d23c70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62956 @0x6d23c72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62956
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6d68b9c
        xor edx, edx
        mov byte ptr ds : [esi+4], dl
        mov byte ptr ds : [esi+5], dl
        xor eax, eax
        lea edi, ds:[esi+8]
        mov ecx, 8
        rep stosd
        mov al, byte ptr ss : [esp+0x30]
        lea ebp, ds:[esi+0x2C]
        mov word ptr ds : [esi+0x28], dx
        mov dword ptr ss : [esp+0x28], edx
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ss : [esp+0x30]
        lea ebx, ds:[esi+0x3C]
        push 0xC
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [ebx], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov dl, byte ptr ss : [esp+0x30]
        lea edi, ds:[esi+0x48]
        push 0
        push 0
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 2
        mov byte ptr ds : [edi], dl
        call public_6cfc340
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi], offset public_6d68f04
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+5], 0
        xor eax, eax
        mov ecx, 8
        lea edi, ds:[esi+8]
        rep stosd
        mov word ptr ds : [esi+0x28], ax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], 3
        call public_6d23fa0
        mov edi, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d5c540
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        call public_6cf7720
        lea ecx, ds:[esi+0x48]
        call public_6d05320
        mov al, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+5], 1
        mov bp, word ptr ss : [esp+0x34]
        xor eax, eax
        mov ecx, 8
        lea edi, ds:[esi+8]
        rep stosd
        xor ebx, ebx
        xor edi, edi
        mov di, bp
        public_6d23d98 : nop
        push edi
        push ebx
        call dword ptr ds : [public_6d64ba4]
        add esp, 8
        test eax, eax
        je public_6d23dcc
        xor ecx, ecx
        mov cl, bl
        lea eax, ds:[esi+8]
        mov edx, ecx
        shr edx, 5
        and ecx, 0x8000001F
        lea eax, ds:[eax+edx*4]
        jns public_6d23dc3
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d23dc3 : nop
        mov edx, 1
        shl edx, cl
        or dword ptr ds : [eax], edx
        public_6d23dcc : nop
        inc ebx
        cmp ebx, 0xFF
        jbe public_6d23d98
        mov eax, dword ptr ss : [esp+0x38]
        mov word ptr ds : [esi+0x28], bp
        mov al, byte ptr ds : [eax]
        test al, al
        je public_6d23e1b
        public_6d23de3 : nop
        xor ecx, ecx
        mov cl, al
        lea eax, ds:[esi+8]
        mov edx, ecx
        shr edx, 5
        and ecx, 0x8000001F
        lea eax, ds:[eax+edx*4]
        jns public_6d23dff
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d23dff : nop
        mov edi, dword ptr ds : [eax]
        mov edx, 1
        shl edx, cl
        or edi, edx
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ds : [eax]
        test al, al
        jne public_6d23de3
        public_6d23e1b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6d23c70)
    }
}

#undef public_6d23d98
#undef public_6d23dc3
#undef public_6d23dcc
#undef public_6d23de3
#undef public_6d23dff
#undef public_6d23e1b
