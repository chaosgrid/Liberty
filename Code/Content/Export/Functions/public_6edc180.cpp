#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edc180);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab44b);

#define public_6edc25d _public_6edc25d
#define public_6edc280 _public_6edc280
#define public_6edc298 _public_6edc298
#define public_6edc2be _public_6edc2be
#define public_6edc2de _public_6edc2de
#define public_6edc34e _public_6edc34e
#define public_6edc351 _public_6edc351

PROC_DECLARE(0x6edc180, internal_6edc180, public_6edc180);
extern "C" NAKED register_t __cdecl internal_6edc180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab44b @0x6edc182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab44b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        mov eax, dword ptr ss : [esp+0xF0]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xF8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0xF8]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x100]
        push esi
        push ecx
        mov dword ptr ss : [esp+0xFC], edi
        mov dword ptr ds : [ebx], offset public_6fb6a50
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edc34e
        push 0x4000
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edc34e
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edc351
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6edc25d
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edc2be
        public_6edc25d : nop
        push 4
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6edc298
        nop 
        lea esp, ss:[esp]
        public_6edc280 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edc280
        public_6edc298 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+4]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_6fa3db0
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+4], esi
        public_6edc2be : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb6a40
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        mov byte ptr ss : [esp+0x24], 0
        jb public_6edc2de
        mov eax, 0x3F
        public_6edc2de : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb6a40
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x24], 0
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6edc304*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x78]
        mov ecx, 0x11
        lea edi, ss:[esp+0x74]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edc351
        public_6edc34e : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edc351 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 0xC
        UNREACHABLE_TRAP(0x6edc180)
    }
}

#undef public_6edc25d
#undef public_6edc280
#undef public_6edc298
#undef public_6edc2be
#undef public_6edc2de
#undef public_6edc34e
#undef public_6edc351
