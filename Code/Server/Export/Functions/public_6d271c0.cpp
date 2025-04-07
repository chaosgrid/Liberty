#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24080);
CLANG_FORWARD_PROC_SYMBOL(public_6d271c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29020);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ded0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e380);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f480);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62b14);

#define public_6d272d0 _public_6d272d0
#define public_6d272d2 _public_6d272d2
#define public_6d272fd _public_6d272fd
#define public_6d27304 _public_6d27304
#define public_6d273ef _public_6d273ef
#define public_6d2741d _public_6d2741d
#define public_6d27429 _public_6d27429
#define public_6d2743e _public_6d2743e
#define public_6d27440 _public_6d27440

PROC_DECLARE(0x6d271c0, internal_6d271c0, public_6d271c0);
extern "C" NAKED register_t __cdecl internal_6d271c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62b14 @0x6d271c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62b14
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        mov eax, dword ptr ss : [esp+0x78]
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6d904c0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d3e380
        mov eax, dword ptr ds : [public_6d904c4]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6d2743e
        mov ebp, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [ebp]
        and eax, 1
        dec al
        neg al
        sbb al, al
        inc al
        movzx esi, al
        mov eax, dword ptr ds : [ecx+esi*4+0x20]
        cmp eax, ebx
        jne public_6d27440
        mov al, byte ptr ss : [esp+0x88]
        lea edi, ds:[ecx+0x10]
        push ebx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x30], al
        call dword ptr ds : [public_6d64b58]
        push edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x84], ebx
        call public_6d29020
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6d904c0
        mov dword ptr ss : [esp+0x88], 1
        call public_6d3dfa0
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ss : [esp+0x30]
        push 0x54
        mov dword ptr ss : [esp+0x90], eax
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x80], 2
        je public_6d272d0
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x90]
        push eax
        mov ecx, edi
        call public_6d24080
        mov dword ptr ds : [edi], offset public_6d68f84
        jmp public_6d272d2
        public_6d272d0 : nop
        xor edi, edi
        public_6d272d2 : nop
        cmp edi, ebx
        setne cl
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], edi
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x80], 3
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        jne public_6d272fd
        xor eax, eax
        jmp public_6d27304
        public_6d272fd : nop
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ds:[eax+edx*2]
        public_6d27304 : nop
        push ebp
        push eax
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_6d3f480
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x98]
        mov edi, eax
        mov dword ptr ss : [esp+esi*4+0x4C], eax
        add esp, 0x10
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [public_6d64b10]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x54], ebx
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x88], 4
        call public_6d3e3f0
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_6d904c0
        mov byte ptr ss : [esp+0x88], 5
        call public_6d3ded0
        mov esi, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x84], 4
        call dword ptr ds : [public_6d64b58]
        push 1
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x84], 3
        call dword ptr ds : [public_6d64b58]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ss:[esp+0x34]
        add esi, 0x10
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b6c]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [esi+0x14], edx
        cmp byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x80], 1
        je public_6d273ef
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, ebx
        je public_6d273ef
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d273ef : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6d27429
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d2741d
        cmp cl, 0xFF
        je public_6d2741d
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        public_6d2741d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d27429 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        public_6d2743e : nop
        mov eax, ebx
        public_6d27440 : nop
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x6d271c0)
    }
}

#undef public_6d272d0
#undef public_6d272d2
#undef public_6d272fd
#undef public_6d27304
#undef public_6d273ef
#undef public_6d2741d
#undef public_6d27429
#undef public_6d2743e
#undef public_6d27440
