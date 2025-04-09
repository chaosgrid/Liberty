#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a480);

#define public_54a13c _public_54a13c
#define public_54a147 _public_54a147
#define public_54a15f _public_54a15f
#define public_54a166 _public_54a166
#define public_54a16b _public_54a16b
#define public_54a1a8 _public_54a1a8
#define public_54a1dd _public_54a1dd

PROC_DECLARE(0x54a0e0, internal_54a0e0, public_54a0e0);
extern "C" NAKED register_t __cdecl internal_54a0e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        push edi
        xor eax, eax
        mov ebp, ecx
        mov ecx, 0xA
        lea edi, ss:[esp+0x10]
        rep stosd
        mov ecx, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ds : [public_5c7280]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x44]
        push 0x10
        mov byte ptr ss : [esp+0x3A], 1
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        xor ebx, ebx
        call edi
        test ah, ah
        jns public_54a13c
        mov ebx, 1
        public_54a13c : nop
        push 0x11
        call edi
        test ah, ah
        jns public_54a147
        or ebx, 2
        public_54a147 : nop
        lea eax, ds:[esi-0x100]
        xor ecx, ecx
        cmp eax, 5
        mov byte ptr ss : [esp+0x34], bl
        ja public_54a16b
/*FIXUP jmp dword ptr ds : [eax*4+public_54a1ec] @0x54a158*/
  JMPTB cmp eax, 0
  JMPTB je public_54a166
  JMPTB cmp eax, 1
  JMPTB je public_54a15f
  JMPTB cmp eax, 2
  JMPTB je public_54a16b
  JMPTB cmp eax, 3
  JMPTB je public_54a16b
  JMPTB cmp eax, 4
  JMPTB je public_54a166
  JMPTB cmp eax, 5
  JMPTB je public_54a15f
  JMPTB int 3
        public_54a15f : nop
        mov ecx, 0x100
        jmp public_54a16b
        public_54a166 : nop
        mov ecx, 0x200
        public_54a16b : nop
        mov byte ptr ss : [esp+0x35], cl
        call public_46a480
        test al, al
        jne public_54a1dd
        mov ecx, dword ptr ss : [ebp+0xBA0]
        test ecx, ecx
        je public_54a1a8
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x70]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_54a1dd
        mov ecx, dword ptr ss : [ebp+0xBA0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x74]
        test eax, eax
        jne public_54a1dd
        public_54a1a8 : nop
        cmp dword ptr ss : [esp+0x10], 0xE
        jle public_54a1dd
        mov eax, dword ptr ss : [ebp+0xBA0]
        test eax, eax
        je public_54a1dd
        mov eax, dword ptr ds : [eax+0xC0]
        test eax, eax
        je public_54a1dd
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_54a1dd
        cmp dword ptr ds : [ecx+0x1C], 1
        jne public_54a1dd
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x1CC]
        public_54a1dd : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 0x10
        UNREACHABLE_TRAP(0x54a0e0)
        ASM_EXPORT_ENTRY_SINGLE(0x54a15f, public_54a15f)
    }
}

#undef public_54a13c
#undef public_54a147
#undef public_54a15f
#undef public_54a166
#undef public_54a16b
#undef public_54a1a8
#undef public_54a1dd

#pragma init_seg(compiler)
extern "C" void const* const public_54a15f = __AsmFindLabelExport(&internal_54a0e0, 0x54a15f);
