#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43840);
CLANG_FORWARD_PROC_SYMBOL(public_6d43ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62d6f);

#define public_6d438b0 _public_6d438b0
#define public_6d438d8 _public_6d438d8
#define public_6d438fc _public_6d438fc
#define public_6d43911 _public_6d43911
#define public_6d4394b _public_6d4394b
#define public_6d43968 _public_6d43968
#define public_6d439a9 _public_6d439a9
#define public_6d439c6 _public_6d439c6
#define public_6d439e7 _public_6d439e7
#define public_6d439fe _public_6d439fe
#define public_6d43a1f _public_6d43a1f
#define public_6d43a33 _public_6d43a33
#define public_6d43a40 _public_6d43a40
#define public_6d43a61 _public_6d43a61
#define public_6d43a70 _public_6d43a70
#define public_6d43a8b _public_6d43a8b
#define public_6d43aa0 _public_6d43aa0
#define public_6d43ab6 _public_6d43ab6
#define public_6d43aff _public_6d43aff
#define public_6d43b08 _public_6d43b08
#define public_6d43b7c _public_6d43b7c
#define public_6d43b8d _public_6d43b8d
#define public_6d43b9e _public_6d43b9e
#define public_6d43bc1 _public_6d43bc1

PROC_DECLARE(0x6d43840, internal_6d43840, public_6d43840);
extern "C" NAKED register_t __cdecl internal_6d43840()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62d6f @0x6d43848*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62d6f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x17A0
        mov dword ptr fs : [0], esp
        call public_6d60160
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x244]
        call dword ptr ds : [public_6d644f0]
        mov eax, dword ptr ss : [esp+0x17BC]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x24C]
        mov dword ptr ss : [esp+0x17BC], ebx
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d43ab6
        lea ecx, ss:[esp+0x244]
        call dword ptr ds : [public_6d64540]
        test al, al
        je public_6d43ab6
        push ebp
        lea esp, ss:[esp]
        public_6d438b0 : nop
        call dword ptr ds : [public_6d6481c]
        mov esi, dword ptr ds : [public_6d64538]
/*FIXUP push offset public_6d6ad54 @0x6d438bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad54
        lea ecx, ss:[esp+0x24C]
        call esi
        test al, al
        je public_6d438d8
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d438fc
/*FIXUP public_6d438d8 : nop
        push offset public_6d6ad44 @0x6d438d8*/
  FIXUP public_6d438d8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad44
        lea ecx, ss:[esp+0x24C]
        call esi
        test al, al
        je public_6d43aa0
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d43aa0
        public_6d438fc : nop
        lea ecx, ss:[esp+0x248]
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6d43aa0
        public_6d43911 : nop
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP push offset public_6d6ad3c @0x6d43917*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad3c
        lea ecx, ss:[esp+0x24C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x248]
        je public_6d43968
        call dword ptr ds : [public_6d64564]
        cmp eax, ebx
        jne public_6d4394b
        mov dword ptr ds : [public_6d8f650], ebx
        mov byte ptr ds : [public_6d8f654], bl
        jmp public_6d43a8b
        public_6d4394b : nop
        push eax
        push 0x104
/*FIXUP push offset public_6d8f654 @0x6d43951*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f654
        call public_6d03cf0
        add esp, 0xC
        mov dword ptr ds : [public_6d8f650], eax
        jmp public_6d43a8b
/*FIXUP public_6d43968 : nop
        push offset public_6d6ad38 @0x6d43968*/
  FIXUP public_6d43968 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad38
        call esi
        test al, al
        je public_6d43a8b
        mov esi, dword ptr ds : [public_6d64590]
        push ebx
        lea ecx, ss:[esp+0x24C]
        call esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x140], ebx
        mov byte ptr ss : [esp+0x144], bl
        jne public_6d439a9
        mov dword ptr ss : [esp+0x140], ebx
        mov byte ptr ss : [esp+0x144], bl
        jmp public_6d439c6
        public_6d439a9 : nop
        push eax
        lea ecx, ss:[esp+0x148]
        push 0x104
        push ecx
        call public_6d03cf0
        add esp, 0xC
        mov dword ptr ss : [esp+0x140], eax
        public_6d439c6 : nop
        push 1
        lea ecx, ss:[esp+0x24C]
        call esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x3C], bl
        jne public_6d439e7
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x3C], bl
        jmp public_6d439fe
        public_6d439e7 : nop
        push eax
        lea edx, ss:[esp+0x40]
        push 0x104
        push edx
        call public_6d03cf0
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], eax
        public_6d439fe : nop
        push 2
        lea ecx, ss:[esp+0x24C]
        call esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        jne public_6d43a1f
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        jmp public_6d43a33
        public_6d43a1f : nop
        push eax
        lea eax, ss:[esp+0x1C]
        push 0x20
        push eax
        call public_6d03cf0
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        public_6d43a33 : nop
        xor ebp, ebp
        mov edi, offset public_6d8d080
        xor esi, esi
        lea esp, ss:[esp]
        public_6d43a40 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        call dword ptr ds : [public_6d64bb8]
        add esp, 8
        test eax, eax
        je public_6d43a61
        add esi, 0x14
        inc ebp
        add edi, 0x14
        cmp esi, 0x64
        jb public_6d43a40
        jmp public_6d43a70
        public_6d43a61 : nop
        lea edx, ss:[ebp+ebp*4]
        mov eax, dword ptr ds : [edx*4+public_6d8d090]
        mov dword ptr ss : [esp+0x10], eax
        public_6d43a70 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x150]
        push eax
        call public_6d43ce0
        add esp, 0x10
        public_6d43a8b : nop
        lea ecx, ss:[esp+0x248]
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6d43911
        public_6d43aa0 : nop
        lea ecx, ss:[esp+0x248]
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6d438b0
        pop ebp
        public_6d43ab6 : nop
        lea ecx, ss:[esp+0x166C]
        mov dword ptr ss : [esp+0x17B4], 1
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0x166C]
        mov byte ptr ss : [esp+0x17B4], 2
        call dword ptr ds : [public_6d64660]
        mov eax, dword ptr ss : [esp+0x1670]
        cmp eax, ebx
        je public_6d43b08
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d43aff
        cmp cl, 0xFF
        je public_6d43aff
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d43b08
        public_6d43aff : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d43b08 : nop
        mov dword ptr ss : [esp+0x1670], ebx
        mov dword ptr ss : [esp+0x1674], ebx
        mov dword ptr ss : [esp+0x1678], ebx
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x24C]
        mov dword ptr ss : [esp+0x17BC], 3
        call dword ptr ds : [public_6d64b78]
        mov eax, dword ptr ss : [esp+0x254]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_6d43b9e
        cmp dword ptr ss : [esp+0x258], ebx
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6d43b8d
        mov eax, dword ptr ss : [esp+0x25C]
        cmp eax, ebx
        je public_6d43b7c
        push eax
        call dword ptr ds : [public_6d64a68]
        mov dword ptr ss : [esp+0x25C], ebx
        mov dword ptr ss : [esp+0x260], ebx
        public_6d43b7c : nop
        mov ecx, dword ptr ss : [esp+0x258]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x258], ebx
        public_6d43b8d : nop
        mov edx, dword ptr ss : [esp+0x254]
        push edx
        call esi
        mov dword ptr ss : [esp+0x254], edi
        public_6d43b9e : nop
        mov eax, dword ptr ss : [esp+0x25C]
        cmp eax, ebx
        je public_6d43bc1
        push eax
        call dword ptr ds : [public_6d64c94]
        add esp, 4
        mov dword ptr ss : [esp+0x25C], ebx
        mov dword ptr ss : [esp+0x260], ebx
        public_6d43bc1 : nop
        push 1
        lea ecx, ss:[esp+0x248]
        mov dword ptr ss : [esp+0x268], ebx
        mov dword ptr ss : [esp+0x17B8], edi
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ss : [esp+0x17AC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x17AC
        ret 
        UNREACHABLE_TRAP(0x6d43840)
    }
}

#undef public_6d438b0
#undef public_6d438d8
#undef public_6d438fc
#undef public_6d43911
#undef public_6d4394b
#undef public_6d43968
#undef public_6d439a9
#undef public_6d439c6
#undef public_6d439e7
#undef public_6d439fe
#undef public_6d43a1f
#undef public_6d43a33
#undef public_6d43a40
#undef public_6d43a61
#undef public_6d43a70
#undef public_6d43a8b
#undef public_6d43aa0
#undef public_6d43ab6
#undef public_6d43aff
#undef public_6d43b08
#undef public_6d43b7c
#undef public_6d43b8d
#undef public_6d43b9e
#undef public_6d43bc1
