#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443ed0);
CLANG_FORWARD_PROC_SYMBOL(public_444060);
CLANG_FORWARD_PROC_SYMBOL(public_444080);
CLANG_FORWARD_PROC_SYMBOL(public_444290);
CLANG_FORWARD_PROC_SYMBOL(public_5593d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5b97c8);

#define public_443f10 _public_443f10
#define public_443fc0 _public_443fc0

PROC_DECLARE(0x443ed0, internal_443ed0, public_443ed0);
extern "C" NAKED register_t __cdecl internal_443ed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b97c8 @0x443ed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b97c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call public_5593d0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        lea eax, ds:[esi+0x144]
        mov ecx, 4
        mov edi, edi
        public_443f10 : nop
        mov dword ptr ds : [eax-0x110], ebx
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec ecx
        jne public_443f10
        lea ecx, ds:[esi+0x154]
        call dword ptr ds : [public_5c610c]
        mov ecx, dword ptr ds : [public_5c61b4]
        mov edi, dword ptr ds : [public_5c61b0]
        push ecx
        push edi
        push 8
        push 0x20
        lea ebp, ds:[esi+0x1F0]
        push ebp
        mov byte ptr ss : [esp+0x30], 1
        call public_5b7fba
        lea ecx, ds:[esi+0x304]
        mov byte ptr ss : [esp+0x1C], 2
        call edi
/*FIXUP push offset _public_444080 @0x443f5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444080
/*FIXUP push offset _public_444060 @0x443f5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444060
        push 5
        push 0xC
        lea edx, ds:[esi+0x324]
        push edx
        mov byte ptr ss : [esp+0x30], 3
        call public_5b7fba
        mov dword ptr ds : [esi], offset public_5cb930
        mov dword ptr ds : [esi+0x2F4], ebx
        mov dword ptr ds : [esi+0x300], ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1C0], eax
        mov dword ptr ds : [esi+0x1C4], eax
        mov dword ptr ds : [esi+0x1C8], eax
        mov byte ptr ss : [esp+0x1C], 4
        mov dword ptr ds : [esi+0x1CC], eax
        lea edi, ds:[esi+0x1D0]
        mov dword ptr ss : [esp+0x24], 8
        nop 
        public_443fc0 : nop
        mov ecx, ebp
        mov dword ptr ds : [edi], 0xFFFFFFFF
        call dword ptr ds : [public_5c61ac]
        mov eax, dword ptr ss : [esp+0x24]
        add edi, 4
        add ebp, 0x20
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_443fc0
        lea ecx, ds:[esi+0x304]
        mov dword ptr ds : [esi+0x2F0], ebx
        mov byte ptr ds : [esi+0x2F8], bl
        mov dword ptr ds : [esi+0x2FC], ebx
        call dword ptr ds : [public_5c61ac]
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x360], ebx
        mov dword ptr ds : [esi+0x364], ebx
        mov byte ptr ds : [esi+0x368], bl
        mov dword ptr ds : [esi+0x36C], ebx
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x374], ebx
        mov byte ptr ds : [esi+0x378], bl
        mov byte ptr ds : [esi+0x3AC], bl
        call public_444290
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x443ed0)
    }
}

#undef public_443f10
#undef public_443fc0
