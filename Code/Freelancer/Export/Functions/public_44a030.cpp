#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445e20);
CLANG_FORWARD_PROC_SYMBOL(public_445ea0);
CLANG_FORWARD_PROC_SYMBOL(public_445f40);
CLANG_FORWARD_PROC_SYMBOL(public_44a030);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9ba3);

#define public_44a056 _public_44a056
#define public_44a06b _public_44a06b
#define public_44a076 _public_44a076
#define public_44a0fc _public_44a0fc
#define public_44a143 _public_44a143
#define public_44a19f _public_44a19f
#define public_44a1cb _public_44a1cb
#define public_44a1cd _public_44a1cd
#define public_44a2a9 _public_44a2a9
#define public_44a2ce _public_44a2ce
#define public_44a2d4 _public_44a2d4

PROC_DECLARE(0x44a030, internal_44a030, public_44a030);
extern "C" NAKED register_t __cdecl internal_44a030()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9ba3 @0x44a038*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9ba3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        xor esi, esi
        push edi
        mov dword ptr ss : [ebp+0x818], esi
        public_44a056 : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ds : [ecx+0x158]
        test edx, edx
        mov dword ptr ss : [esp+0x14], esi
        jne public_44a06b
        xor eax, eax
        jmp public_44a076
        public_44a06b : nop
        mov eax, dword ptr ds : [ecx+0x15C]
        sub eax, edx
        sar eax, 2
        public_44a076 : nop
        cmp esi, eax
        jge public_44a2d4
        mov ecx, dword ptr ds : [ecx+0x158]
        mov ebx, dword ptr ds : [ecx+esi*4]
        mov eax, dword ptr ds : [ebx+0x4C]
        push eax
        call dword ptr ds : [public_5c6234]
        add esp, 4
        test al, al
        je public_44a2ce
        lea ecx, ss:[esp+0x1C]
        call public_445e20
        mov edi, dword ptr ds : [ebx]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [esp+0x10], edi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44a0fc
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, edi
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        mov eax, edx
        rep movsb
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c706c]
        public_44a0fc : nop
        mov esi, dword ptr ds : [ebx+4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        mov dword ptr ss : [esp+0x14], ecx
        push ecx
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44a143
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x30]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        mov eax, edx
        rep movsb
        push eax
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c706c]
        public_44a143 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x3C], ecx
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        mov esi, dword ptr ds : [ebx+0x48]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        mov dword ptr ss : [esp+0x14], ecx
        push ecx
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44a19f
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x74]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        mov eax, edx
        rep movsb
        push eax
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c706c]
        public_44a19f : nop
        push 0x80
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov byte ptr ss : [esp+0x88], 1
        je public_44a1cb
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebp
        mov ecx, eax
        call public_445f40
        jmp public_44a1cd
        public_44a1cb : nop
        xor eax, eax
        public_44a1cd : nop
        mov edx, dword ptr ss : [ebp+0x818]
        mov dword ptr ss : [ebp+edx*4+0x618], eax
        mov ecx, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+ecx*4+0x618]
        mov al, byte ptr ds : [ebx+0x3C]
        mov byte ptr ds : [ecx+0x10], al
        mov edx, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+edx*4+0x618]
        mov al, byte ptr ds : [ebx+0x3D]
        mov byte ptr ds : [ecx+0x11], al
        mov ecx, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+ecx*4+0x618]
        mov al, byte ptr ds : [ebx+0x3E]
        mov byte ptr ds : [ecx+0x12], al
        mov edx, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+edx*4+0x618]
        mov al, byte ptr ds : [ebx+0x3F]
        mov byte ptr ds : [ecx+0x49], al
        mov ecx, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+ecx*4+0x618]
        mov al, byte ptr ds : [ebx+0x40]
        mov byte ptr ds : [ecx+0x15], al
        mov edx, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+edx*4+0x618]
        mov al, byte ptr ds : [ebx+0x41]
        mov byte ptr ds : [ecx+0x16], al
        mov ecx, dword ptr ss : [ebp+0x818]
        mov eax, dword ptr ds : [ebx+0x44]
        mov ecx, dword ptr ss : [ebp+ecx*4+0x618]
        mov dword ptr ds : [ecx+0x18], eax
        mov edx, dword ptr ss : [ebp+0x818]
        mov al, byte ptr ds : [ebx+0x50]
        mov ecx, dword ptr ss : [ebp+edx*4+0x618]
        mov byte ptr ds : [ecx+0x14], al
        mov al, byte ptr ds : [ebx+0x3F]
        test al, al
        mov byte ptr ss : [esp+0x88], 0
        je public_44a2a9
        mov eax, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+eax*4+0x618]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [ebp+0x44], eax
        mov eax, dword ptr ss : [ebp+0x818]
        mov ecx, dword ptr ss : [ebp+eax*4+0x618]
        mov eax, dword ptr ds : [ecx+0x58]
        mov dword ptr ss : [ebp+0x48], eax
        public_44a2a9 : nop
        mov eax, dword ptr ss : [ebp+0x818]
        inc eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [ebp+0x818], eax
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call public_445ea0
        mov esi, dword ptr ss : [esp+0x14]
        public_44a2ce : nop
        inc esi
        jmp public_44a056
        public_44a2d4 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x44a030)
    }
}

#undef public_44a056
#undef public_44a06b
#undef public_44a076
#undef public_44a0fc
#undef public_44a143
#undef public_44a19f
#undef public_44a1cb
#undef public_44a1cd
#undef public_44a2a9
#undef public_44a2ce
#undef public_44a2d4
