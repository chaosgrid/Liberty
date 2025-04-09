#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_589ba0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4521);

#define public_589cf9 _public_589cf9
#define public_589d19 _public_589d19
#define public_589d1b _public_589d1b

PROC_DECLARE(0x589ba0, internal_589ba0, public_589ba0);
extern "C" NAKED register_t __cdecl internal_589ba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4521 @0x589ba2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4521
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_59f860
        xor ebx, ebx
        mov byte ptr ds : [esi+0x34B], bl
        mov byte ptr ds : [esi+0x34A], bl
        mov byte ptr ds : [esi+0x349], bl
        mov byte ptr ds : [esi+0x348], bl
        mov byte ptr ds : [esi+0x361], bl
        mov byte ptr ds : [esi+0x360], bl
        mov byte ptr ds : [esi+0x35F], bl
        mov byte ptr ds : [esi+0x35E], bl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x374], ebx
        mov byte ptr ds : [esi+0x384], bl
        mov byte ptr ds : [esi+0x383], bl
        mov byte ptr ds : [esi+0x382], bl
        mov byte ptr ds : [esi+0x381], bl
        mov byte ptr ds : [esi+0x388], bl
        mov byte ptr ds : [esi+0x387], bl
        mov byte ptr ds : [esi+0x386], bl
        mov byte ptr ds : [esi+0x385], bl
        mov dword ptr ds : [esi], offset public_5e4f24
        mov dword ptr ds : [esi+0x7C], offset public_5e4f18
        mov dword ptr ds : [esi+0x32C], ebx
        mov dword ptr ds : [esi+0x330], ebx
        mov byte ptr ds : [esi+0x354], bl
        mov dword ptr ds : [esi+0x358], ebx
        mov ecx, dword ptr ds : [public_679bb0]
        mov eax, 1
        mov dword ptr ds : [esi+0x348], ecx
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x18], al
        mov byte ptr ds : [esi+0x34B], 0xFF
        mov dword ptr ds : [esi+0x338], ecx
        mov dword ptr ds : [esi+0x33C], ecx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov dword ptr ds : [esi+0x344], ebx
        mov byte ptr ds : [esi+0x35C], bl
        mov byte ptr ds : [esi+0x35D], bl
        mov byte ptr ds : [esi+0x362], bl
        mov dword ptr ds : [esi+0x364], eax
        mov dword ptr ds : [esi+0x368], ebx
        mov dword ptr ds : [esi+0x36C], 0x3D4CCCCD
        mov byte ptr ds : [esi+0x378], bl
        mov byte ptr ds : [esi+0x379], bl
        mov byte ptr ds : [esi+0x37A], bl
        mov dword ptr ds : [esi+0x37C], ebx
        mov byte ptr ds : [esi+0x380], al
        mov byte ptr ds : [esi+0x389], bl
        cmp dword ptr ds : [public_67d8c8], ebx
        jge public_589cf9
        mov dword ptr ds : [public_67d8c8], ebx
        public_589cf9 : nop
        push 0x34
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x18], 2
        je public_589d19
        mov ecx, eax
        call public_4144b0
        jmp public_589d1b
        public_589d19 : nop
        xor eax, eax
        public_589d1b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x334], eax
        mov byte ptr ds : [esi+0x394], bl
        mov byte ptr ds : [esi+0x395], bl
        mov byte ptr ds : [esi+0x39C], bl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x589ba0)
    }
}

#undef public_589cf9
#undef public_589d19
#undef public_589d1b
